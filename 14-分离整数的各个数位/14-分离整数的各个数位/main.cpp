//
//  main.cpp
//  14-分离整数的各个数位
//
//  Created by 穆康 on 2017/11/14.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 从键盘输入一个任意的三位整数，要求正确地分离出它的百位、十位和个位数，并分别在屏幕上输出，输出采用每行输出一个数的方式，不带其它符号。
 
 输入
 
 一个任意的三位整数
 
 输出
 
 一个任意的三位整数
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int num = 0;
    cin >> num;
    
    cout << num / 100 << endl;
    
    num = num % 100;
    cout << num / 10 << endl;
    
    num = num % 10;
    cout << num << endl;
    
    return 0;
}
