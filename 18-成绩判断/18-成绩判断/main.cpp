//
//  main.cpp
//  18-成绩判断
//
//  Created by 穆康 on 2017/11/15.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 输入一个0--100的分数，判断分数代表什么等级。
 
 95<=分数<=100, 输出1
 
 90<=分数<95,输出2
 
 85<=分数<90,输出3
 
 80<=分数<85,输出4
 
 70<=分数<80,输出5
 
 60<=分数<70输出6
 
 分数 < 60;输出7.
 
 输入
 
 n
 
 输出
 
 m
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int grade = 0;
    cin >> grade;
    
    if (grade >= 95 && grade <= 100) {
        cout << 1 << endl;
    } else if (grade >= 90 && grade < 95) {
        cout << 2 << endl;
    } else if (grade >= 85 && grade < 90) {
        cout << 3 << endl;
    } else if (grade >= 80 && grade < 85) {
        cout << 4 << endl;
    } else if (grade >= 70 && grade < 80) {
        cout << 5 << endl;
    } else if (grade >= 60 && grade < 70) {
        cout << 6 << endl;
    } else if (grade < 60) {
        cout << 7 << endl;
    }
    
    return 0;
}
