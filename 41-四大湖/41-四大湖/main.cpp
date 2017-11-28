//
//  main.cpp
//  41-四大湖
//
//  Created by 穆康 on 2017/11/23.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 我国有4大淡水湖。
 
 A说：洞庭湖最大，洪泽湖最小，鄱阳湖第三。
 
 B说：洪泽湖最大，洞庭湖最小，鄱阳湖第二，太湖第三。
 
 C说：洪泽湖最小，洞庭湖第三。
 
 D说：鄱阳湖最大，太湖最小，洪泽湖第二，洞庭湖第三。
 
 已知这4个湖的大小均不相等，4个人每人仅答对一个，
 
 请编程按照鄱阳湖、洞庭湖、太湖、洪泽湖的顺序给出他们的大小排名。
 
 输入
 
 无。
 
 输出
 
 输出为4行，第1行为鄱阳湖的大小名次，从大到小名次分别表示为1、2、3、4；第2、3、4行分别为洞庭湖、太湖、洪泽湖的大小名次。
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int lakeBY, lakeDT, lakeT, lakeHZ, a, b, c, d;
    int lakeArray[4];
    
    for (lakeBY = 1; lakeBY <= 4; lakeBY++) {
        for (lakeDT = 1; lakeDT <= 4; lakeDT++) {
            if (lakeDT == lakeBY) continue;
            
            for (lakeT = 1; lakeT <= 4; lakeT++) {
                if (lakeT == lakeBY || lakeT == lakeDT) continue;
                
                lakeHZ = 10 - lakeBY - lakeDT - lakeT;
                a = (lakeDT == 1) + (lakeHZ == 4) + (lakeBY == 3);
                b = (lakeHZ == 1) + (lakeDT == 4) + (lakeBY == 2) + (lakeT == 3);
                c = (lakeHZ == 4) + (lakeDT == 3);
                d = (lakeBY == 1) + (lakeT == 4) + (lakeHZ == 2) + (lakeDT == 3);
                
                if ((a == 1) && (b == 1) && (c == 1) && (d == 1)) {
                    lakeArray[0] = lakeBY;
                    lakeArray[1] = lakeDT;
                    lakeArray[2] = lakeT;
                    lakeArray[3] = lakeHZ;
                }
            }
        }
    }
    
    for (int i=0; i<4; i++) {
        cout << lakeArray[i] << endl;
    }
    
    return 0;
}
