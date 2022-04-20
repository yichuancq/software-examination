//
//  main.cpp
//  variable
//
//  Created by yichuan on 2022/4/20.
//

#include <iostream>
using namespace std;
//函数申明
int add(int a,int b);
// 变量声明
extern int a, b;
extern int c;
extern float f;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    //    extern int d = 3, f = 5;    // d 和 f 的声明
    //    int d = 3, f = 5;           // 定义并初始化 d 和 f
    //    byte z = 22;                // 定义并初始化 z
    char x = 'x';               // 变量 x 的值为 'x'
    // 变量定义
    int a, b;
    int c;
    float f;
    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;
    int d=add(a,b);
    cout<<"d="<<d<<endl;
    cout << c << endl ;
    f = 70.0/3.0;
    cout << f << endl ;
    return 0;
}
/* 函数体**/
int add(int a,int b){
    return a+b;
}
