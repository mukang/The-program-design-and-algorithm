//
//  main.cpp
//  13-最大奇数与最小偶数之差的绝对值
//
//  Created by 穆康 on 2017/11/14.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 输入6个正整数，且这6个正整数中至少存在一个奇数和一个偶数。
 
 设这6个正整数中最大的奇数为a，最小的偶数为b，求出|a-b|的值
 
 输入
 
 输入为一行，6个正整数,且6个正整数都小于100
 
 输入保证这6个数中至少存在一个奇数和一个偶数
 
 输出
 
 输出为一行，输出最大的奇数与最小的偶数之差的绝对值
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    const int n = 6;
    int array[n] = {0};
    int maxOdd = 1, minEven = 100, currentNum = 0;
    
    for (int i=0; i<n; i++) {
        cin >> array[i];
    }
    
    for (int i=0; i<n; i++) {
        currentNum = array[i];
        if (currentNum % 2) {
            if (maxOdd < currentNum) {
                maxOdd = currentNum;
            }
        } else {
            if (minEven > currentNum) {
                minEven = currentNum;
            }
        }
    }
    
    int num = maxOdd - minEven;
    if (num < 0) {
        num = minEven - maxOdd;
    }
    
    cout << num << endl;
    
    return 0;
}
