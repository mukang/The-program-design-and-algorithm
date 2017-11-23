//
//  main.cpp
//  39-字符串插入
//
//  Created by 穆康 on 2017/11/22.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 有两个字符串str和substr，str的字符个数不超过10，substr的字符个数为3。（字符个数不包括字符串结尾处的'\0'。）将substr插入到str中ASCII码最大的那个字符后面，若有多个最大则只考虑第一个。
 
 输入
 
 输入包括若干行，每一行为一组测试数据，格式为
 
 str substr
 
 输出
 
 对于每一组测试数据，输出插入之后的字符串。
 
 提示
 
 这题有多组输入，请参照第二题的提示依次读入和处理每一组数据。
 
 如果使用了字符串函数，比如strlen，请包含cstring头文件 #include <cstring>。
 */

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    char str[14] = {'\0'}, substr[4] = {'\0'};
    
    while (cin >> str >> substr) {
        long len = strlen(str);
        long maxChar = str[0];
        long index = 0;
        for (long i=1; i<len; i++) {
            if (str[i] > maxChar) {
                maxChar = str[i];
                index = i;
            }
        }
        for (long i=len; i>index; i--) {
            str[i+3] = str[i];
        }
        for (long i=index+1; i<index+4; i++) {
            str[i] = substr[i-index-1];
        }
        cout << str << endl;
    }
    
    return 0;
}
