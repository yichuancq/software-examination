//
//  main.cpp
//  swapelement
//
//  Created by yichuan on 2022/4/21.
//

#include <iostream>
using namespace std;
void _swap(int *x, int *y);
//函数声明
int main(int argc, const char * argv[]) {
    // insert code here...
    // insert code here..
    int x=10;
    int y=20;
    cout << "交换前，a 的值：" << x << endl;
    cout << "交换前，b 的值：" << y << endl;
    /* 调用函数来交换值
     * &a 表示指向 a 的指针，即变量 a 的地址
     * &b 表示指向 b 的指针，即变量 b 的地址
     */
    _swap(&x,&y);
    cout << "交换后，a 的值：" << x<< endl;
    cout << "交换后，b 的值：" << y<< endl;
    
    return 0;
}
// 函数定义
void _swap(int *x, int *y)
{
    int temp;
    temp = *x;    /* 保存地址 x 的值 */
    *x = *y;        /* 把 y 赋值给 x */
    *y = temp;    /* 把 x 赋值给 y */
    return;
}
