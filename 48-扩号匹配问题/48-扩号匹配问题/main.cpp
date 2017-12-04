//
//  main.cpp
//  48-扩号匹配问题
//
//  Created by 穆康 on 2017/12/4.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 在某个字符串（长度不超过100）中有左括号、右括号和大小写字母；规定（与常见的算数式子一样）任何一个左括号都从内到外与在它右边且距离最近的右括号匹配。写一个程序，找到无法匹配的左括号和右括号，输出原来字符串，并在下一行标出不能匹配的括号。不能匹配的左括号用"$"标注,不能匹配的右括号用"?"标注.
 
 输入
 
 输入包括多组数据，每组数据一行，包含一个字符串，只包含左右括号和大小写字母，字符串长度不超过100
 
 注意：cin.getline(str,100)最多只能输入99个字符！
 
 输出
 
 对每组输出数据，!!!输出两行，第一行包含原始输入字符!!!，第二行由"$","?"和空格组成，"$"和"?"表示与之对应的左括号和右括号不能匹配。
 */

#include <iostream>
#include <cstring>
using namespace std;

int position = 0;

bool match(char str[], int index) {
    index++;
    while (str[index] != '(' && str[index] != ')' && str[index] != '\0') {
        index++;
    }
    position = index;
    if (str[index] == '(') {
        bool isMatch = match(str, index);
        if (isMatch) {
            str[index] = ' ';
            str[position] = ' ';
            return match(str, position);
        } else {
            return false;
        }
    } else if (str[index] == ')') {
        return true;
    } else {
        return false;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    char str[100][100] = {'\0'};
    char str[110] = {'\0'};
    
    while (cin >> str) {
        cout << str << endl;
        for (int i=0; i<strlen(str); i++) {
            if (str[i] != '(' && str[i] != ')') {
                str[i] = ' ';
            }
        }
        
        int index = 0;
        while (str[index] != '\0') {
            while (str[index] != '(') {
                index++;
            }
            bool isMatch = match(str, index);
            if (isMatch) {
                str[index] = ' ';
                str[position] = ' ';
            }
            index = position;
        }
        
        index = 0;
        while (str[index] != '\0') {
            if (str[index] == '(') {
                str[index] = '$';
            } else if (str[index] == ')') {
                str[index] = '?';
            }
            index++;
        }
        
        cout << str << endl;
    }
    
    return 0;
}
