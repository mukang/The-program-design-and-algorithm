//
//  main.cpp
//  37-最远距离
//
//  Created by 穆康 on 2017/11/22.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 给定一组点(x,y)，求距离最远的两个点之间的距离。
 
 输入
 
 第一行是点数n（n大于等于2）
 
 接着每一行代表一个点，由两个浮点数x y组成。
 
 输出
 
 输出一行是最远两点之间的距离。
 
 使用cout << fixed << setprecision(4) << dis << endl;输出距离值并精确到小数点后4位。
 
 fixed和setprecision是在<iomanip>头文件里定义的格式控制操作符，需要#include <iomanip>.
 */

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0;
    double array[100][2] = {0};
    double dis = 0.0, currentDis = 0.0;
    
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> array[i][0] >> array[i][1];
    }
    
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            currentDis = sqrt((array[j][0] - array[i][0]) * (array[j][0] - array[i][0]) + (array[j][1] - array[i][1]) * (array[j][1] - array[i][1]));
            if (dis < currentDis) {
                dis = currentDis;
            }
        }
    }
    
    cout << fixed << setprecision(4) << dis << endl;
    
    return 0;
}
