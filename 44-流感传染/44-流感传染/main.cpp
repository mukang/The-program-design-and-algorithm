//
//  main.cpp
//  44-流感传染
//
//  Created by 穆康 on 2017/11/23.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 有一批易感人群住在网格状的宿舍区内，宿舍区为n*n的矩阵，每个格点为一个房间，房间里可能住人，也可能空着。在第一天，有些房间里的人得了流感，以后每天，得流感的人会使其邻居传染上流感，（已经得病的不变），空房间不会传染。请输出第m天得流感的人数。
 
 输入
 
 第一行一个数字n，n不超过100，表示有n*n的宿舍房间。
 
 接下来的n行，每行n个字符，’.’表示第一天该房间住着健康的人，’#’表示该房间空着，’@’表示第一天该房间住着得流感的人。
 
 接下来的一行是一个整数m，m不超过100.
 
 输出
 
 输出第m天，得流感的人数
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, m;
    char dorm[100][100] = {'\0'};
    
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> dorm[i][j];
        }
    }
    cin >> m;
    
    m--;
    while (m--) {
        int array[10000][2];
        int count = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (dorm[i][j] == '@') {
                    array[count][0] = i;
                    array[count][1] = j;
                    count++;
                }
            }
        }
        for (int index=0; index<count; index++) {
            int i = array[index][0];
            int j = array[index][1];
            
            if ((i - 1 >= 0) && (dorm[i-1][j] == '.')) {
                dorm[i-1][j] = '@';
            }
            if ((i + 1 < n) && (dorm[i+1][j] == '.')) {
                dorm[i+1][j] = '@';
            }
            if ((j - 1 >= 0) && (dorm[i][j-1] == '.')) {
                dorm[i][j-1] = '@';
            }
            if ((j + 1 < n) && (dorm[i][j+1] == '.')) {
                dorm[i][j+1] = '@';
            }
        }
    }
    
    int count = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (dorm[i][j] == '@') {
                count++;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}
