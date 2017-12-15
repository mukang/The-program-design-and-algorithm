//
//  main.cpp
//  59-走出迷宫
//
//  Created by 穆康 on 2017/12/15.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 当你站在一个迷宫里的时候，往往会被错综复杂的道路弄得失去方向感，如果你能得到迷宫地图，事情就会变得非常简单。
 
 假设你已经得到了一个n*m的迷宫的图纸，请你找出从起点到出口的最短路。
 
 输入
 
 第一行是两个整数n和m(1 <= n,m <= 100)，表示迷宫的行数和列数。
 
 接下来n行，每行一个长为m的字符串，表示整个迷宫的布局。字符'.'表示空地，'#'表示墙，'S'表示起点,'T'表示出口。
 
 输出
 
 输出从起点到出口最少需要走的步数。(你不能起出迷宫外)
 */

#include <iostream>
#include <limits.h>
using namespace std;

int n = 0, m = 0;
char maze[101][101] = {'\0'};
int mark[101][101] = {0};

int currentStepsForMaze(int, int);

int minStepsForMaze(int startX, int startY) {
    int minSteps = INT_MAX;
    int currentSteps = 0;
    
    if (startX - 1 >= 0) {
        maze[startX][startY] = 'X';
        currentSteps = currentStepsForMaze(startX - 1, startY);
        maze[startX][startY] = '.';
        if (currentSteps && minSteps > currentSteps) {
            minSteps = currentSteps;
        }
    }
    
    if (startX + 1 < n) {
        maze[startX][startY] = 'X';
        currentSteps = currentStepsForMaze(startX + 1, startY);
        maze[startX][startY] = '.';
        if (currentSteps && minSteps > currentSteps) {
            minSteps = currentSteps;
        }
    }
    
    if (startY - 1 >= 0) {
        maze[startX][startY] = 'X';
        currentSteps = currentStepsForMaze(startX, startY - 1);
        maze[startX][startY] = '.';
        if (currentSteps && minSteps > currentSteps) {
            minSteps = currentSteps;
        }
    }
    
    if (startY + 1 < m) {
        maze[startX][startY] = 'X';
        currentSteps = currentStepsForMaze(startX, startY + 1);
        maze[startX][startY] = '.';
        if (currentSteps && minSteps > currentSteps) {
            minSteps = currentSteps;
        }
    }
    
    if (minSteps == INT_MAX) {
        minSteps = 0;
    }
    
    return minSteps;
}

int currentStepsForMaze(int x, int y) {
    char current = maze[x][y];
    int currentSteps = 0;
    
    if (current == 'T') {
        currentSteps = 1;
    } else if (current == '.') {
        int steps = 0;
        if (mark[x][y]) {
            steps = mark[x][y];
        } else {
            steps = minStepsForMaze(x, y);
            mark[x][y] = steps;
        }
        currentSteps = steps ? steps + 1 : 0;
    }
    
    return currentSteps;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    cin >> n >> m;
    cin.get();
    for (int i=0; i<n; i++) {
        cin.getline(maze[i], m + 1);
    }
    
    int startX = 0, startY = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (maze[i][j] == 'S') {
                startX = i;
                startY = j;
                break;
            }
        }
    }
    
    int steps = minStepsForMaze(startX, startY);
    
    cout << steps << endl;
    
    return 0;
}
