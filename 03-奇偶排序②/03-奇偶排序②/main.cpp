//
//  main.cpp
//  03-奇偶排序②
//
//  Created by 穆康 on 2017/7/17.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 和上题一样，但是要求用第二种解法
 
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
    
    // 冒泡，不断比较相邻的两个数，如果顺序错了，那么就交换
    for (int i=0; i<n-1; i++) {
        for (int j=1; j<n-i; j++) {
            // 与刚才的冒泡排序不同，我们不只是通过较数字的大小决定顺序
            // 如果左边的为偶数，右边的为奇数，那么顺序也需要颠倒
            bool leftIsEven = a[j-1] % 2 == 0;
            bool rightIsEven = a[j] % 2 == 0;
            if ((leftIsEven && !rightIsEven) || (leftIsEven == rightIsEven && a[j-1] > a[j])) {
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
