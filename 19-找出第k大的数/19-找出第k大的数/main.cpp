//
//  main.cpp
//  19-找出第k大的数
//
//  Created by 穆康 on 2017/11/15.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 用户输入N和K，然后接着输入N个正整数（无序的），程序在不对N个整数排序的情况下，找出第K大的数。注意，第K大的数意味着从大到小排在第K位的数。
 
 输入
 
 N
 
 K
 
 a1 a2 a3 a4 ..... aN
 
 输出
 
 b
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N = 0, K = 0;
    int array[100] = {0};
    
    cin >> N >> K;
    for (int i=0; i<N; i++) {
        cin >> array[i];
    }
    
    int count = 0;
    for (int i=0; i<N; i++) {
        count = 1;
        for (int j=0; j<N; j++) {
            if (array[i] < array[j]) {
                count++;
            }
        }
        if (count == K) {
            cout << array[i] << endl;
            break;
        }
    }
    
    return 0;
}
