//
//  main.cpp
//  17-年龄与疾病
//
//  Created by 穆康 on 2017/11/15.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理。
 
 输入
 
 共2行，第一行为过往病人的数目n（0 < n <= 100)，第二行为每个病人患病时的年龄。
 
 输出
 
 每个年龄段（分四段：18以下，19-35，36-60，大于60注意看样例输出的格式）的患病人数占总患病人数的比例，以百分比的形式输出，精确到小数点后两位（double）。关于c++的格式化的输入输出，请参考：http://www.cplusplus.com/reference/iomanip。也可以在网上搜索一下，资料很多的。
 
 提示
 
 注意最后一行的输出是“60-: ”，而不是“61-: ”。
 
 每个冒号之后有一个空格。
 
 输出可以用 cout<<fixed<<setprecision(2) << f; 来保留f后面的两位小数。
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0, age = 0;
    int array[101] = {0};
    
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> age;
        array[age]++;
    }
    
    int count = 0;
    double f = 0.0;
    for (int i=1; i<=18; i++) {
        count += array[i];
    }
    f = (double)count / (double)n;
    cout << "1-18: " << fixed << setprecision(2) << f * 100 << "%" << endl;
    
    count = 0;
    for (int i=19; i<=35; i++) {
        count += array[i];
    }
    f = (double)count / (double)n;
    cout << "19-35: " << fixed << setprecision(2) << f * 100 << "%" << endl;
    
    count = 0;
    for (int i=36; i<=60; i++) {
        count += array[i];
    }
    f = (double)count / (double)n;
    cout << "36-60: " << fixed << setprecision(2) << f * 100 << "%" << endl;
    
    count = 0;
    for (int i=61; i<=100; i++) {
        count += array[i];
    }
    f = (double)count / (double)n;
    cout << "60-: " << fixed << setprecision(2) << f * 100 << "%" << endl;
    
    return 0;
}
