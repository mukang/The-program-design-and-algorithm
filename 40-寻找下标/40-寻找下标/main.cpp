//
//  main.cpp
//  40-寻找下标
//
//  Created by 穆康 on 2017/11/23.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 已知一个整数数组x[],其中的元素彼此都不相同。找出给定的数组中是否有一个元素满足x[i]=i的关系，数组下标从0开始。
 
 举例而言，如果x[]={-2,-1,7,3,0,8},则x[3] = 3,因此3就是答案。
 
 输入
 
 第一行包含一个整数n (0 < n < 100)，表示数组中元素的个数。<br />第二行包含n个整数，依次表示数组中的元素。
 
 输出
 
 输出为一个整数，即满足x[i]=i的元素，若有多个元素满足，输出第一个满足的元素。若没有元素满足，则输出“N”。
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0, x[100] = {0};
    
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> x[i];
    }
    
    bool has = false;
    for (int i=0; i<n; i++) {
        if (x[i] == i) {
            cout << i << endl;
            has = true;
            break;
        }
    }
    
    if (!has) {
        cout << "N" <<endl;
    }
    
    return 0;
}
