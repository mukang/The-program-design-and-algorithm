//
//  main.cpp
//  43-Tomorrow never knows？
//
//  Created by 穆康 on 2017/11/23.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 甲壳虫的《A day in the life》和《Tomorrow never knows》脍炙人口，如果告诉你a day in the life,真的会是tomorrow never knows?相信学了计概之后这个不会是难题，现在就来实现吧。
 
 读入一个格式为yyyy-mm-dd的日期（即年－月－日），输出这个日期下一天的日期。可以假定输入的日期不早于1600-01-01，也不晚于2999-12-30。
 
 输入
 
 输入仅一行，格式为yyyy-mm-dd的日期。
 
 输出
 
 输出也仅一行，格式为yyyy-mm-dd的日期
 
 提示
 
 闰年的标准：
 
 (1)普通年能被4整除且不能被100整除的为闰年。（如2004年就是闰年,1901年不是闰年）
 
 (2)世纪年能被400整除的是闰年。(如2000年是闰年，1100年不是闰年)
 
 可以利用一个字符变量吃掉输入的短横线（减号），输出时请活用setfill和setw 控制符。
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int pmonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int rmonth[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month, day;
    char slash;
    
    cin >> year >> slash >> month >> slash >> day;
    
    int dayOfMonth;
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        dayOfMonth = rmonth[month - 1];
    } else {
        dayOfMonth = pmonth[month - 1];
    }
    
    day++;
    if (day > dayOfMonth) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
    
    cout << setfill('0');
    cout << setw(4) << year << '-' << setw(2) << month << '-' << setw(2) << day << endl;
    
    return 0;
}
