//
//  main.cpp
//  58-寻找平面上的极大点
//
//  Created by 穆康 on 2017/12/15.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 在一个平面上，如果有两个点(x,y),(a,b),如果说(x,y)支配了(a,b)，这是指x>=a,y>=b;
 
 用图形来看就是(a,b)坐落在以(x,y)为右上角的一个无限的区域内。
 
 给定n个点的集合，一定存在若干个点，它们不会被集合中的任何一点所支配，这些点叫做极大值点。
 
 编程找出所有的极大点，按照x坐标由小到大，输出极大点的坐标。
 
 本题规定：n不超过100，并且不考虑点的坐标为负数的情况。
 
 输入
 
 输入包括两行，第一行是正整数n，表示是点数，第二行包含n个点的坐标，坐标值都是整数，坐标范围从0到100，输入数据中不存在坐标相同的点。
 
 输出
 
 按x轴坐标最小到大的顺序输出所有极大点。
 
 输出格式为:(x1,y1),(x2,y2),...(xk,yk)
 
 注意：输出的每个点之间有","分隔,最后一个点之后没有",",少输出和多输出都会被判错
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0, dot[100][2] = {0};
    
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> dot[i][0] >> dot[i][1];
    }
    
    int temp = 0;
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-1-i; j++) {
            if (dot[j][0] < dot[j+1][0]) {
                temp = dot[j][0];
                dot[j][0] = dot[j+1][0];
                dot[j+1][0] = temp;
                temp = dot[j][1];
                dot[j][1] = dot[j+1][1];
                dot[j+1][1] = temp;
            }
        }
    }
    
    for (int i=0; i<n-1; i++) {
        if (dot[i][0] == 0 && dot[i][1] == 0) {
            continue;
        }
        for (int j=i+1; j<n; j++) {
            if (dot[j][0] == 0 && dot[j][1] == 0) {
                continue;
            }
            if (dot[i][0] >= dot[j][0] && dot[i][1] >= dot[j][1]) {
                dot[j][0] = 0;
                dot[j][1] = 0;
            }
            if (dot[i][0] <= dot[j][0] && dot[i][1] <= dot[j][1]) {
                dot[i][0] = 0;
                dot[i][1] = 0;
                break;
            }
        }
    }
    
    bool mark = 0;
    for (int i=n-1; i>=0; i--) {
        if (dot[i][0] != 0 || dot[i][1] != 0) {
            if (mark == 0) {
                mark = 1;
                cout << '(' << dot[i][0] << ',' << dot[i][1] << ')';
            } else {
                cout << ',' << '(' << dot[i][0] << ',' << dot[i][1] << ')';
            }
        }
    }
    cout << endl;
    
    return 0;
}
