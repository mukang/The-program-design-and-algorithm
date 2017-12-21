//
//  main.cpp
//  61-简单的学生信息处理程序实现
//
//  Created by 穆康 on 2017/12/21.
//  Copyright © 2017年 杭州部落公社科技有限公司. All rights reserved.
//

/*
 描述
 
 在一个学生信息处理程序中，要求实现一个代表学生的类，并且所有成员变量都应该是私有的。
 
 （注：评测系统无法自动判断变量是否私有。我们会在结束之后统一对作业进行检查，请同学们严格按照题目要求完成，否则可能会影响作业成绩。）
 
 输入
 
 姓名，年龄，学号，第一学年平均成绩，第二学年平均成绩，第三学年平均成绩，第四学年平均成绩。
 
 其中姓名、学号为字符串，不含空格和逗号；年龄为正整数；成绩为非负整数。
 
 各部分内容之间均用单个英文逗号","隔开，无多余空格。
 
 输出
 
 一行，按顺序输出：姓名，年龄，学号，四年平均成绩（向下取整）。
 
 各部分内容之间均用单个英文逗号","隔开，无多余空格。
 */

#include <iostream>
using namespace std;

class Student {
private:
    char _name[30] = {'\0'}, _number[10] = {'\0'};
    int _age;
    unsigned int _score01, _score02, _score03, _score04;
    
public:
    void init(char *name, char *number, int age, unsigned int score01, unsigned int score02, unsigned int score03, unsigned int score04) {
        for (int i = 0; name[i] != '\0'; i++) {
            _name[i] = name[i];
        }
        for (int i = 0; number[i] != '\0'; i++) {
            _number[i] = number[i];
        }
        _age = age;
        _score01 = score01;
        _score02 = score02;
        _score03 = score03;
        _score04 = score04;
    }
    
    void coutStudentInformation() {
        int score = (int)((_score01 + _score02 + _score03 + _score04) / 4.0);
        cout << _name << ',' << _age << ',' << _number << ',' << score << endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    char name[30] = {'\0'}, number[10] = {'\0'}, dot;
    int age;
    unsigned int score01, score02, score03, score04;
    
    cin.getline(name, 30, ',');
    cin >> age >> dot;
    cin.getline(number, 10, ',');
    cin >> score01 >> dot >> score02 >> dot >> score03 >> dot >> score04;
    
    Student a;
    a.init(name, number, age, score01, score02, score03, score04);
    
    a.coutStudentInformation();
    
    return 0;
}
