//
//  main.cpp
//  01-实现冒泡排序
//
//  Created by 穆康 on 2017/7/16.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 请根据自己的理解编写冒泡排序算法，数组大小1000以内
 
 输入
 
 第一行是n，表示数组的大小
 
 接着n行是数组的n个元素
 
 输出
 
 排序之后的结果
 
 一个元素一行
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, a[1000];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    // 冒泡，不断比较相邻的两个数，如果顺序错了，那么就交换
    for (int i=0; i<n-1; i++) {
        for (int j=1; j<n-i; j++) {
            if (a[j-1] > a[j]) {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    
    // 依次输出
    for (int i=0; i<n; i++) {
        cout << a[i] << endl;
    }
    
    return 0;
}
