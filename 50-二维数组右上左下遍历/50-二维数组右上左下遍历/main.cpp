//
//  main.cpp
//  50-二维数组右上左下遍历
//
//  Created by 穆康 on 2017/12/7.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 给定一个row行col列的整数数组array，要求从array[0][0]元素开始，按从左上到右下的对角线顺序遍历整个数组。
 
 输入
 
 输入的第一行上有两个整数，依次为row和col。
 
 余下有row行，每行包含col个整数，构成一个二维整数数组。
 
 （注：输入的row和col保证0 < row < 100, 0 < col < 100）
 
 输出
 
 按遍历顺序输出每个整数。每个整数占一行。
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int row = 0, col = 0;
    int array[100][100] = {0};
    
    cin >> row >> col;
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cin >> array[i][j];
        }
    }
    
    for (int k=0; k<row+col-1; k++) {
        for (int i=0; i<=k; i++) {
            int j = k - i;
            if (i < row && j < col) {
                cout << array[i][j] << endl;
            }
        }
    }
    
    return 0;
}
