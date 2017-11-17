//
//  main.cpp
//  25-找和为K的两个元素
//
//  Created by 穆康 on 2017/11/17.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 在一个长度为n(n < 1000)的整数序列中，判断是否存在某两个元素之和为k。
 
 输入
 
 第一行输入序列的长度n和k，用空格分开。
 
 第二行输入序列中的n个整数，用空格分开。
 
 输出
 
 如果存在某两个元素的和为k，则输出yes，否则输出no。
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0, k = 0;
    int array[1000] = {0};
    
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> array[i];
    }
    
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (array[i] + array[j] == k) {
                cout << "yes" << endl;
                return 0;
            }
        }
    }
    
    cout << "no" << endl;
    
    return 0;
}
