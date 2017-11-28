//
//  main.cpp
//  45-单词翻转
//
//  Created by 穆康 on 2017/11/28.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 输入一个句子（一行），将句子中的每一个单词翻转后输出。
 
 输入
 
 只有一行，为一个字符串，不超过500个字符。单词之间以空格隔开。所谓单词指的是所有不包含空格的连续的字符。
 
 这道题请用cin.getline输入一行后再逐个单词递归处理。
 
 输出
 
 翻转每一个单词后的字符串，单词之间的空格需与原文一致。
 */

#include <iostream>
using namespace std;

int i = 0;
char str[501] = {'\0'};

int reverseWord() {
    char c = str[i];
    i++;
    
    if (c == ' ') {
        return 1;
    }
    if (c != ' ' && c != '\0') {
        reverseWord();
        cout << c;
    }
    
    return 1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cin.getline(str, 501);
    while (str[i] != '\0') {
        if (reverseWord() == 1) {
            cout << " ";
        }
    }
    
    if (str[i] == '\0') {
        cout << endl;
    }
    
    return 0;
}
