//
//  main.cpp
//  07-1的个数
//
//  Created by 穆康 on 2017/7/17.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 给定一个十进制整数N，求其对应2进制数中1的个数
 
 输入
 
 第一个整数表示有N组测试数据，其后N行是对应的测试数据，每行为一个整数。
 
 输出
 
 N行，每行输出对应一个输入。
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    cin >> n;
    
    for (int i=0; i<n; i++) {
        int x, ans = 0;
        cin >> x;
        while (x > 0) {
            ans += x % 2;
            x /= 2;
        }
        cout << ans << endl;
    }
    
    return 0;
}
