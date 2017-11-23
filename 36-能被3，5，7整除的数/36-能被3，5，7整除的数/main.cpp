//
//  main.cpp
//  36-能被3，5，7整除的数
//
//  Created by 穆康 on 2017/11/22.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 输入一个整数，判断它能否被3，5，7整除，并输出以下信息：
 
 1、能同时被3，5，7整除（直接输出3 5 7，每个数中间一个空格）；
 
 2、能被其中两个数整除（输出两个数，小的在前，大的在后。例如：3 5或者 3 7或者5 7,中间用空格分隔）
 
 3、能被其中一个数整除（输出这个除数）
 
 4、不能被任何数整除；（输出小写字符'n',不包括单引号)
 
 输入
 
 一个数字
 
 输出
 
 一行数字,从小到大排列,包含3,5,7中为该输入的除数的数字,数字中间用空格隔开
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0;
    while (cin >> n) {
        if ((n % 3 != 0) && (n % 5 != 0) && (n % 7 != 0)) {
            cout << "n";
        } else {
            if (n % 3 == 0) {
                cout << 3 << " ";
            }
            if (n % 5 == 0) {
                cout << 5 << " ";
            }
            if (n % 7 == 0) {
                cout << 7 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
