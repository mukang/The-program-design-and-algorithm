//
//  main.cpp
//  29-最长单词2
//
//  Created by 穆康 on 2017/11/17.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 一个以'.'结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其它特殊形式
 
 输入
 
 一个以'.'结尾的简单英文句子（长度不超过500），单词之间用空格分隔，没有缩写形式和其它特殊形式
 
 输出
 
 该句子中最长的单词。如果多于一个，则输出第一个
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    char s[500], result[500] = {'\0'};
    cin.getline(s, 500);
    
    int i=0, index = 0, len = 0, maxLen = 0;
    while (s[i] != '.') {
        if (s[i] == ' ') {
            if (maxLen < len) {
                maxLen = len;
                index = i;
            }
            len = 0;
        } else {
            len++;
        }
        
        i++;
    }
    
    if (maxLen < len) {
        maxLen = len;
        index = i;
    }
    
    i = 0;
    for (int j=index-maxLen; j<index; j++) {
        result[i] = s[j];
        i++;
    }
    result[i+1] = '\0';
    
    cout << result << endl;
    
    return 0;
}
