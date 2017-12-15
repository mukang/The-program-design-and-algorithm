//
//  main.cpp
//  56-字符串中次数第2多的字母
//
//  Created by 穆康 on 2017/12/14.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 输入一串长度不超过500个符号的字符串，输出在串中出现第2多的英语字母(大小写字母认为相同)和次数（如果串中有其它符号，则忽略不考虑）。如果有多个字母的次数都是第2多，则按串中字母出现的顺序输出第1个。
 
 例 ab&dcAab&c9defgb
 
 这里，a 和 b都出现3次，c和d都出现2次，e、f 和 g 各出现1次，其中的符号&和9均忽略不考虑。因此，出现第2多的应该是 c 和 d，但是 d 开始出现的位置在 c 的前面，因此，输出为
 
 D+d:2
 
 (假定在字符串中，次数第2多的字母总存在)
 
 输入
 
 一个字符串
 
 输出
 
 大写字母+小写字母:个数
 */

#include <iostream>
using namespace std;

void getCountArray(int *countArray, char *str) {
    for (int i=0; str[i] != '\0'; i++) {
        int character = str[i];
        if (character >= 'A' && character <= 'Z') {
            countArray[character - 65]++;
        }
    }
}

void getSecondMaxArray(char *secondMaxArray, int *countArray) {
    int max = 0;
    int j = 0;
    for (int i=0; i<26; i++) {
        if (max < countArray[i]) {
            max = countArray[i];
        }
    }
    for (int i=0; i<26; i++) {
        if (countArray[i] == max) {
            countArray[i] = 0;
        }
    }
    max = 0;
    for (int i=0; i<26; i++) {
        if (max < countArray[i]) {
            max = countArray[i];
        }
    }
    for (int i=0; i<26; i++) {
        if (countArray[i] == max) {
            secondMaxArray[j] = (char)(i + 65);
            j++;
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char str[501] = {'\0'};
    int countArray[26] = {0};
    char secondMaxArray[26] = {'\0'};
    
    cin.getline(str, 501);
    
    for (int i=0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
    
    getCountArray(countArray, str);
    getSecondMaxArray(secondMaxArray, countArray);
    
    bool isFind = false;
    for (int i=0; str[i] != '\0'; i++) {
        char character = str[i];
        if (character >= 'A' && character <= 'Z') {
            for (int j=0; secondMaxArray[j] != '\0'; j++) {
                char secondCharacter = secondMaxArray[j];
                if (character == secondCharacter) {
                    cout << secondCharacter << '+' << (char)(secondCharacter + 32) << ':' << countArray[secondCharacter - 65] << endl;
                    isFind = true;
                    break;
                }
            }
        }
        if (isFind) {
            break;
        }
    }
    
    return 0;
}
