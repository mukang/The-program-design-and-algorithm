//
//  main.cpp
//  27-求字母的个数
//
//  Created by 穆康 on 2017/11/17.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 在一个字符串中找出元音字母a,e,i,o,u出现的次数。
 
 输入
 
 输入一行字符串（字符串中可能有空格，请用cin.getline(s,counts)方法把一行字符串输入到字符数组s中，其中counts是s的最大长度，这道题里面可以直接写80。），字符串长度小于80个字符。
 
 输出
 
 输出一行，依次输出a,e,i,o,u在输入字符串中出现的次数，整数之间用空格分隔。
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    char s[100];
    int a = 0, e = 0, i = 0, o = 0, u = 0, j = 0;
    cin.getline(s, 80);
    
    while (s[j] != '\0') {
        switch (s[j]) {
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
                
            default:
                break;
        }
        j++;
    }
    
    cout << a << " " << e << " " << i << " " << o << " " << u << endl;
    
    return 0;
}
