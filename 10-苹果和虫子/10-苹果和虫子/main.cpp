//
//  main.cpp
//  10-苹果和虫子
//
//  Created by 穆康 on 2017/11/8.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？
 
 输入
 
 输入仅一行，包括n，x和y（均为整数）。
 
 输出
 
 输出也仅一行，剩下的苹果个数。
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n = 0, x = 0, y = 0;
    
    cin >> n >> x >> y;
    
    int a = y / x;
    int b = y % x;
    
    if (b) {
        a += 1;
    }
    
    int c = n - a;
    
    if (c < 0) {
        c = 0;
    }
    
    cout << c << endl;
    
    return 0;
}
