//
//  main.cpp
//  02-奇偶排序①
//
//  Created by 穆康 on 2017/7/17.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 输入十个整数，将十个整数按升序排列输出，并且奇数在前，偶数在后。
 
 输入
 
 输入十个整数
 
 输出
 
 按照奇偶排序好的十个整数
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 10;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    // 首先，我们把奇数放到数组左边，欧尚放到数组右边
    // 用左手和右手分别指向数组两端
    int l = 0, r = 9;
    while (l <= r) {
        bool leftIsOdd = a[l] % 2 == 1;
        bool rightIsEven = a[r] % 2 == 0;
        if (leftIsOdd) {
            l++;
        } else if (rightIsEven) {
            r--;
        } else if (!leftIsOdd && !rightIsEven) {
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
        }
    }
    
    // 对l左边（奇数部分）冒泡，不断比较相邻的两个数，如果顺序错了，那么就交换
    int start = 0, end = l;
    for (int i=start; i<end-1; i++) {
        for (int j=start+1; j<start+end-i; j++) {
            if (a[j-1] > a[j]) {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    
    // 对l右边（偶数部分）冒泡，不断比较相邻的两个数，如果顺序错了，那么就交换
    start = l, end = n;
    for (int i=start; i<end-1; i++) {
        for (int j=start+1; j<start+end-i; j++) {
            if (a[j-1] > a[j]) {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    
    for (int i=0; i<n; i++) {
        cout << a[i] << ' ';
    }
    
    return 0;
}
