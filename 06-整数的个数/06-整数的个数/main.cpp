//
//  main.cpp
//  06-整数的个数
//
//  Created by 穆康 on 2017/7/17.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 给定k（1<k<100）个正整数，其中每个数都是大于等于1，小于等于10的数。写程序计算给定的k个正整数中，1，5和10出现的次数。
 
 输入
 
 输入有两行：第一行包含一个正整数k，第二行包含k个正整数，每两个正整数用一个空格分开。
 
 输出
 
 输出有三行，第一行为1出现的次数，，第二行为5出现的次数，第三行为10出现的次数。
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int k;
    cin >> k;
    int n1 = 0, n5 = 0, n10 = 0;
    
    for (int i=0; i<k; i++) {
        int n;
        cin >> n;
        if (n==1) {
            n1++;
        } else if (n==5) {
            n5++;
        } else if (n==10) {
            n10++;
        }
    }
    cout << n1 << endl;
    cout << n5 << endl;
    cout << n10 << endl;
    
    return 0;
}
