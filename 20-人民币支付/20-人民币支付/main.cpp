//
//  main.cpp
//  20-人民币支付
//
//  Created by 穆康 on 2017/11/15.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 从键盘输入一指定金额（以元为单位，如345），然后输出支付该金额的各种面额的人民币数量，显示100元，50元，20元，10元，5元，1元各多少张，要求尽量使用大面额的钞票。
 
 输入
 
 一个小于1000的正整数。
 
 输出
 
 输出分行，每行显示一个整数，从上到下分别表示100元，50元，20元，10元，5元，1元人民币的张数
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int money = 0;
    cin >> money;
    
    cout << money / 100 << endl;
    money %= 100;
    cout << money / 50 << endl;
    money %= 50;
    cout << money / 20 << endl;
    money %= 20;
    cout << money / 10 << endl;
    money %= 10;
    cout << money / 5 << endl;
    money %= 5;
    cout << money / 1 << endl;
    
    return 0;
}
