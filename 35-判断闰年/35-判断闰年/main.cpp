//
//  main.cpp
//  35-判断闰年
//
//  Created by 穆康 on 2017/11/22.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 判断某年是否是闰年。
 
 输入
 
 输入只有一行，包含一个整数a(0 < a < 3000)
 
 输出
 
 一行，如果公元a年是闰年输出Y，否则输出N
 
 提示
 
 公历纪年法中，能被4整除的大多是闰年，但能被100整除而不能被400整除的年份不是闰年， 能被3200整除的也不是闰年，如1900年是平年，2000年是闰年，3200年不是闰年。
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 0;
    cin >> a;
    if ((a % 4 == 0) && !((a % 100 == 0) && (a % 400 != 0)) && (a % 3200 != 0)) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }
    
    return 0;
}
