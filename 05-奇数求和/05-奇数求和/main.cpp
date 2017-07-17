//
//  main.cpp
//  05-奇数求和
//
//  Created by 穆康 on 2017/7/17.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 计算正整数 m 到 n（包括m 和 n ）之间的所有奇数的和，其中，m 不大于 n，且n 不大于300。例如 m=3, n=12, 其和则为：3+5+7+9+11=35
 
 输入
 
 两个数 m 和 n，两个数以空格间隔，其中 0<=m <= n <= 300 。
 
 输出
 
 奇数之和
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int m, n, result = 0;
    cin >> m >> n;
    
    while (m<=n) {
        if (m % 2 == 1) {
            result += m;
        }
        m++;
    }
    
    cout << result << endl;
    
    return 0;
}
