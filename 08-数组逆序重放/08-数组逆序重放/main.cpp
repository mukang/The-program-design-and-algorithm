//
//  main.cpp
//  08-数组逆序重放
//
//  Created by 穆康 on 2017/7/17.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 将一个数组中的值按逆序重新存放。例如，原来的顺序为8,6,5,4,1。要求改为1,4,5,6,8。
 
 输入
 
 输入为两行：第一行数组中元素的个数n（1<n<100)，第二行是n个整数，每两个整数之间用空格分隔。
 
 输出
 
 输出为一行：输出逆序后数组的整数，每两个整数之间用空格分隔。
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a[100];
    int n;
    cin >> n;
    
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    while (n--) {
        cout << a[n];
        if (n>0) {
            cout << ' ';
        }
    }
    
    return 0;
}
