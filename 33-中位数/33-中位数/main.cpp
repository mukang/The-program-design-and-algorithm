//
//  main.cpp
//  33-中位数
//
//  Created by 穆康 on 2017/11/21.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 中位数定义：一组数据按从小到大的顺序依次排列，处在中间位置的一个数或最中间两个数据的平均值（如果这组数的个数为奇数，则中位数为位于中间位置的那个数；如果这组数的个数为偶数，则中位数是位于中间位置的两个数的平均值）.
 
 给出一组无序整数，求出中位数，如果求最中间两个数的平均数，向下取整即可（不需要使用浮点数）
 
 输入
 
 该程序包含多组测试数据，每一组测试数据的第一行为N，代表该组测试数据包含的数据个数，1 <= N <= 15000.
 
 接着N行为N个数据的输入，N=0时结束输入
 
 输出
 
 输出中位数，每一组测试数据输出一行
 
 提示
 
 这是也一道经典的算法问题，在企业面试里出现概率很高，是“找到第K大的数”的变种。先排序再找中位数自然是很直接的做法，但排序本身很慢。我们只想找到第n/2大的数，对于其他数的顺序我们并不关心。
 那么怎么在不排序的前提下找到第n/2大的数呢？
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0;
    int array[10000] = {0};
    while (cin >> n) {
        if (!n) {
            break;
        }
        
        for (int i=0; i<n; i++) {
            cin >> array[i];
        }
        
        int endIndex = n / 2, temp = 0;
        for (int i=0; i<=endIndex; i++) {
            for (int j=0; j<n-1-i; j++) {
                if (array[j+1] < array[j]) {
                    temp = array[j+1];
                    array[j+1] = array[j];
                    array[j] = temp;
                }
            }
        }
        
        int result = 0;
        if (n % 2) {
            result = array[endIndex];
        } else {
            result = (array[endIndex-1] + array[endIndex]) / 2;
        }
        cout << result << endl;
    }
    
    return 0;
}
