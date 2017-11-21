//
//  main.cpp
//  30-矩阵交换行
//
//  Created by 穆康 on 2017/11/20.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 在main函数中， 生成一个5*5的矩阵，输入矩阵数据，并输入n，m的值。判断n，m是否在数组范围内，如果不在，则输出error；如果在范围内，则将n行和m行交换，输出交换n，m后的新矩阵。
 
 输入
 
 5*5矩阵的数据，以及n和m的值。
 
 输出
 
 如果不可交换，则输出error
 
 如果可交换，则输出新矩阵
 
 提示
 
 输出error格式如下：
 
 cout<< "error" << endl;
 
 输出矩阵格式如下：
 
 cout<< setw(4)<< num;
 
 输出矩阵一行后要输出cout<< endl;
 
 setw是iomanip库里定义的格式控制操作符，需要#include <iomanip> 包含这个头文件。
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    const int row = 5, column = 5;
    int array[row][column] = {0};
    int n = 0, m = 0;
    
    for (int i=0; i<row; i++) {
        for (int j=0; j<column; j++) {
            cin >> array[i][j];
        }
    }
    cin >> n >> m;
    
    if (n >= row || n < 0 || m >= row || m < 0) {
        cout << "error" << endl;
        return 0;
    }
    
    int temp = 0;
    for (int i=0; i<column; i++) {
        temp = array[n][i];
        array[n][i] = array[m][i];
        array[m][i] = temp;
    }
    for (int i=0; i<row; i++) {
        for (int j=0; j<column; j++) {
            cout << setw(4) << array[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
