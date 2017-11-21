//
//  main.cpp
//  31-异常细胞检测
//
//  Created by 穆康 on 2017/11/20.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 我们拍摄的一张CT照片用一个二维数组来存储，假设数组中的每个点代表一个细胞。每个细胞的颜色用0到255之间（包括0和255）的一个整数表示。我们定义一个细胞是异常细胞，如果这个细胞的颜色值比它上下左右4个细胞的颜色值都小50以上（包括50）。数组边缘上的细胞我们不检测。现在我们的任务是，给定一个存储CT照片的二维数组，写程序统计照片中异常细胞的数目。
 
 输入
 
 第一行包含一个整数N（100>=N>2）.
 
 下面有 N 行，每行有 N 个0~255之间的整数，整数之间用空格隔开。
 
 输出
 
 输出只有一行，包含一个整数，为异常细胞的数目。
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0;
    int array[100][100] = {0};
    
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> array[i][j];
        }
    }
    
    int count = 0, currentNum = 0;
    for (int i=1; i<n-1; i++) {
        for (int j=1; j<n-1; j++) {
            currentNum = array[i][j];
            if ((array[i-1][j] - currentNum >= 50) && (array[i+1][j] - currentNum >= 50) && (array[i][j-1] - currentNum >= 50) && (array[i][j+1] - currentNum >= 50)) {
                count++;
            }
        }
    }
    cout << count <<endl;
    
    return 0;
}
