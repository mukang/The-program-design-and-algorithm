//
//  main.cpp
//  51-文字排版
//
//  Created by 穆康 on 2017/12/7.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 给一段英文短文，单词之间以空格分隔（每个单词包括其前后紧邻的标点符号）。请将短文重新排版，要求如下：
 
 每行不超过80个字符；每个单词居于同一行上；在同一行的单词之间以一个空格分隔；行首和行尾都没有空格。
 
 输入
 
 第一行是一个整数n，表示英文短文中单词的数目. 其后是n个以空格分隔的英文单词（单词包括其前后紧邻的标点符号，且每个单词长度都不大于40个字母）。
 
 输出
 
 排版后的多行文本，每行文本字符数最多80个字符，单词之间以一个空格分隔，每行文本首尾都没有空格。
 */

#include <iostream>
using namespace std;

#define kCount 10000

int main(int argc, const char * argv[]) {
    // insert code here...
    char str[kCount] = {'\0'};
    int n = 0, index = 0, max = 80;
    
    cin >> n;
    cin.get();
    cin.getline(str, 10001);
    
    while (1) {
        index += max;
        if (str[index] == '\0') {
            break;
        }
        while (str[index] != ' ') {
            index--;
        }
        str[index] = '\n';
        index++;
    }
    
    cout << str << endl;
    
    return 0;
}
