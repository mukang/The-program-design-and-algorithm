//
//  main.cpp
//  54-寻找山顶
//
//  Created by 穆康 on 2017/12/12.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 在一个m×n的山地上，已知每个地块的平均高程，请求出所有山顶所在的地块（所谓山顶，就是其地块平均高程不比其上下左右相邻的四个地块每个地块的平均高程小的地方)。
 
 输入
 
 第一行是两个整数，表示山地的长m（5≤m≤20）和宽n（5≤n≤20）。
 
 其后m行为一个m×n的整数矩阵，表示每个地块的平均高程。每行的整数间用一个空格分隔。
 
 输出
 
 输出所有山顶所在地块的位置。每行一个。按先m值从小到大，再n值从小到大的顺序输出。
 */

#include <iostream>
using namespace std;

void findMaxPosition(const int (*array)[20], int m, int n) {
    int mark[20][20] = {0};
    int top = 0, left = 0, bottom = 0, right = 0;
    int value = 0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            value = array[i][j];
            if (value == 1) {
                continue;
            }
            top = (i - 1 >= 0) ? i - 1 : 0;
            bottom = (i + 1 < m) ? i + 1 : m - 1;
            left = (j - 1 >= 0) ? j - 1 : 0;
            right = (j + 1 < n) ? j + 1 : n - 1;
            
            if (value >= array[top][j] && value >= array[bottom][j] && value >= array[i][left] && value >= array[i][right]) {
                cout << i << ' ' << j << endl;
                
                if (value > array[top][j]) {
                    mark[top][j] = 1;
                }
                if (value > array[bottom][j]) {
                    mark[bottom][j] = 1;
                }
                if (value > array[i][left]) {
                    mark[i][left] = 1;
                }
                if (value > array[i][right]) {
                    mark[i][right] = 1;
                }
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int m = 0, n = 0;
    int array[20][20] = {0};
    
    cin >> m >> n;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin >> array[i][j];
        }
    }
    
    findMaxPosition(array, m, n);
    
    return 0;
}
