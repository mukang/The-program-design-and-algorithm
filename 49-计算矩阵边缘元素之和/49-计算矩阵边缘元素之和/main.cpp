//
//  main.cpp
//  49-计算矩阵边缘元素之和
//
//  Created by 穆康 on 2017/12/7.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 输入一个整数矩阵，计算位于矩阵边缘的元素之和。所谓矩阵边缘的元素，就是第一行和最后一行的元素以及第一列和最后一列的元素。
 
 输入
 
 第一行为整数k，表示有k组数据。
 
 每组数据有多行组成，表示一个矩阵：
 
 第一行分别为矩阵的行数m和列数n（m < 100，n < 100），两者之间以空格分隔。
 
 接下来输入的m行数据中，每行包含n个整数，整数之间以空格作为间隔。
 
 输出
 
 输出对应矩阵的边缘元素和，一个一行。
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int k = 0, m = 0, n = 0, sum = 0;
    int array[100][100] = {0};
    int result[100] = {0};
    
    cin >> k;
    for (int z=0; z<k; z++) {
        cin >> m >> n;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                cin >> array[i][j];
            }
        }
        
        sum = 0;
        if (m == 1 && n == 1) {
            sum = array[0][0];
        } else if (m == 1) {
            for (int i=0; i<n; i++) {
                sum += array[0][i];
            }
        } else if (n == 1) {
            for (int i=0; i<m; i++) {
                sum += array[i][0];
            }
        } else {
            for (int i=0; i<m; i++) {
                sum += array[i][0];
                sum += array[i][n-1];
            }
            for (int i=0; i<n; i++) {
                sum += array[0][i];
                sum += array[m-1][i];
            }
            sum = sum - array[0][0] - array[0][n-1] - array[m-1][0] - array[m-1][n-1];
        }
        
        result[z] = sum;
    }
    
    for (int z=0; z<k; z++) {
        cout << result[z] << endl;
    }
    
    return 0;
}
