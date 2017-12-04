//
//  main.cpp
//  47-排队游戏
//
//  Created by 穆康 on 2017/12/4.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 在幼儿园中，老师安排小朋友做一个排队的游戏。首先老师精心的把数目相同的小男孩和小女孩编排在一个队列中，每个小孩按其在队列中的位置发给一个编号（编 号从0开始）。然后老师告诉小朋友们，站在前边的小男孩可以和他后边相邻的小女孩手拉手离开队列，剩余的小朋友重新站拢，再按前后相邻的小男孩小女孩手拉 手离开队列游戏，如此往复。由于教师精心的安排，恰好可以保证每两个小朋友都能手拉手离开队列，并且最后离开的两个小朋友是编号最小的和最大的两个小朋 友。（注：只有小男孩在前，小女孩在后，且他们两之间没有其他的小朋友，他们才能手拉手离开队列）。请根据老师的排队，按小女孩编号从小到大的顺序，给出 所有手拉手离开队列的小男孩和小女孩的编号对。
 
 输入
 
 用一个字符串代表小朋友队列。字符串中只会出现两个字符（样例输入里用的是 括号但实际数据则不一定），分别代表小男孩和小女孩，首先出现的字符代表小男孩，另一个字符代表小女孩。小孩总数不超过100
 
 输出
 
 按小女孩编号顺序，顺序输出手拉手离开队列的小男孩和小女孩的编号对，每行一对编号，编号之间用一个空格分隔。
 */

#include <iostream>
using namespace std;

char boy;

int recur(char str[], int index) {
    if (str[index] != boy) {
        return index;
    } else {
        int num = recur(str, index + 1);
        cout << index << ' ' << num << endl;
        return recur(str, num + 1);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char str[100] = {'\0'};
    cin >> str;
    
    boy = str[0];
    int num = recur(str, 1);
    
    cout << 0 << ' ' << num << endl;
    
    return 0;
}
