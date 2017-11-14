//
//  main.cpp
//  11-大象喝水
//
//  Created by 穆康 on 2017/11/14.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。
 
 输入
 
 输入有一行：包行两个整数，以一个空格分开，分别表示小圆桶的深h和底面半径r，单位都是厘米。
 
 输出
 
 输出一行，包含一个整数，表示大象至少要喝水的桶数。
 
 提示
 
 如果一个圆桶的深为h厘米，底面半径为r厘米，那么它最多能装Pi * r * r * h立方厘米的水。(设Pi=3.14159)
 
 1升 = 1000毫升
 
 1毫升 = 1 立方厘米
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0, h = 0, r = 0, volume = 20000;
    double singleVolume = 0.0, Pi = 3.14159;
    
    cin >> h >> r;
    
    singleVolume = Pi * r * r * h;
    do {
        n ++;
    } while (singleVolume * n < volume);
    
    cout << n << endl;
    
    return 0;
}
