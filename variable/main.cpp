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
//面积计算
int _area(int width,int len);
// 变量声明
extern int a, b;
extern int c;
extern float f;
//常量定义 长度为10
#define LENGTH 10
//常量定义 宽度为5
#define WIDTH  5

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
    int area;
    //面积计算
    area=WIDTH*LENGTH;
    cout <<"area="<<area<<endl;
    area=_area(WIDTH, LENGTH);
    cout<<"_area"<<area<<endl;
    //用const 关键字定义常量
    const int  LENGTH2 = 10;
    const int  WIDTH2  = 5;
    const char NEWLINE = '\n';
    
    area = LENGTH2 * WIDTH2;
    cout << area;
    cout << NEWLINE;
    // insert code here..
//    const int a=10;
//    const int b=20;
    cout << "交换前，a 的值：" << a << endl;
    cout << "交换前，b 的值：" << b << endl;
    /* 调用函数来交换值
     * &a 表示指向 a 的指针，即变量 a 的地址
     * &b 表示指向 b 的指针，即变量 b 的地址
     */
    cout << "交换后，a 的值：" << a << endl;
    cout << "交换后，b 的值：" << b << endl;
    return 0;
}
/* 函数体**/
int add(int a,int b){
    return a+b;
}
/*面积计算**/
int _area(int a,int b){
    return a*b;
}

