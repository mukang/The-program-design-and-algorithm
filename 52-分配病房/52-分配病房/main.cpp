//
//  main.cpp
//  52-分配病房
//
//  Created by 穆康 on 2017/12/12.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 某个科室的病房分为重症和普通，只有当病人的疾病严重程度超过了入住重症病房的最低严重值，才可以安排入住重症病房。
 
 现在要求设计一个程序，给病人安排好病房。疾病的严重程度用0到10来表示，0表示小毛病，10表示非常严重。
 
 输入
 
 第一行输入病人的个数m(m < 50)，以及安排住入重症病房的最低严重值a
 
 紧接着m行，每行表示病人编号（三个位，用0补齐）及其疾病的严重程度（浮点数，1位小数）。
 
 每个病人的疾病严重程度都不一样。
 
 输出
 
 要求按照病人的严重程度输出住在重症病房里的病人的编号
 
 注意：
 
 如果当前所有病人的严重程度并不满足住在重症病房里，则输出“None.”（不包括引号）
 */

#include <iostream>
#include <iomanip>
using namespace std;

void rankResult(int *num, float *value, int n) {
    int tempNum = 0;
    float tempValue = 0.0;
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-1-i; j++) {
            if (value[j] < value[j+1]) {
                tempNum = num[j];
                num[j] = num[j+1];
                num[j+1] = tempNum;
                
                tempValue = value[j];
                value[j] = value[j+1];
                value[j+1] = tempValue;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int m = 0, n = 0, tempNum = 0, num[50] = {0};
    float a = 0.0, tempValue = 0.0, value[50] = {0.0};
    
    cin >> m >> a;
    while (m--) {
        cin >> tempNum >> tempValue;
        if (tempValue > a) {
            num[n] = tempNum;
            value[n] = tempValue;
            n++;
        }
    }
    
    if (n) {
        rankResult(num, value, n);
        cout.setf(ios::fixed);
        for (int i=0; i<n; i++) {
            cout << setfill('0') << setw(3) << num[i] << ' ' << setprecision(1) << value[i] << endl;
        }
    } else {
        cout << "None" << endl;
    }
    
    return 0;
}
