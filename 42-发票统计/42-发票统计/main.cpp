//
//  main.cpp
//  42-发票统计
//
//  Created by 穆康 on 2017/11/23.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 有一个小型的报账系统，它有如下功能：
 
 （1）统计每个人所报发票的总钱数
 
 （2）统计每类发票的总钱数
 
 将此系统简化为如下：假设发票类别共有A、B、C三种;一共有三个人，ID分别为1、2、3。
 
 输入
 
 系统输入包含三行，每行第一个数为人员ID（整型，1或2或3），第二个数为发票总张数(张数不超过100)，之后是多个发票类别（字符型，A或B或C）和相应发票金额（单进度浮点型,不超过1000.0）。
 
 输出
 
 输出包含六行，前三行为每人（按ID由小到大输出）所报发票总钱数（保留两位小数），后三行为每类发票的总钱数（保留两位小数）。
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int personID, personCount = 3;
    char mold;
    float array[4][4];
    
    while (personCount--) {
        cin >> personID;
        int count = 0;
        float money = 0.0;
        cin >> count;
        for (int i=0; i<count; i++) {
            cin >> mold;
            cin >> money;
            switch (mold) {
                case 'A':
                    array[personID][1] += money;
                    break;
                case 'B':
                    array[personID][2] += money;
                    break;
                case 'C':
                    array[personID][3] += money;
                    break;
                    
                default:
                    break;
            }
        }
    }
    
    float amountA = 0.0, amountB = 0.0, amountC = 0.0;
    for (int i=1; i<=3; i++) {
        float amount = 0.0;
        for (int j=1; j<=3; j++) {
            amount += array[i][j];
            switch (j) {
                case 1:
                    amountA += array[i][j];
                    break;
                case 2:
                    amountB += array[i][j];
                    break;
                case 3:
                    amountC += array[i][j];
                    break;
                    
                default:
                    break;
            }
        }
        cout << i << " " << fixed << setprecision(2) << amount << endl;
    }
    
    cout << "A " << fixed << setprecision(2) << amountA << endl;
    cout << "B " << fixed << setprecision(2) << amountB << endl;
    cout << "C " << fixed << setprecision(2) << amountC << endl;
    
    return 0;
}
