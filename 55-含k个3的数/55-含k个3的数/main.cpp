//
//  main.cpp
//  55-含k个3的数
//
//  Created by 穆康 on 2017/12/14.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 输入二个正整数m 和 k，其中1 < m < 100000，1 < k <5 ，判断m 能否被19整除，且恰好含有k个3，如果满足条件，则输出YES，否则，输出NO。
 
 例如，输入：
 
 43833 3
 
 满足条件，输出YES
 
 如果输入
 
 39331 3
 
 尽管有3个3，但不能被19整除，也不满足条件，应输出NO
 
 输入
 
 m 和 k 的值，空格间隔
 
 输出
 
 满足条件时输出 YES，不满足时输出 NO
 */

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int m = 0, k = 0;
    char mStr[7] = {'\0'};
    
    cin >> m >> k;
    
    if (m % 19 != 0) {
        cout << "NO" << endl;
        return 0;
    }
    
    sprintf(mStr, "%d", m);
    
    int i = 0, count = 0;
    while (mStr[i] != '\0') {
        if (mStr[i] == 51) {
            count++;
        }
        i++;
    }
    
    if (count == k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
