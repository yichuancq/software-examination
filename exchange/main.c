//
//  main.c
//  exchange
//
//  Created by yichuan on 2022/4/19.
//

#include <stdio.h>
///exchange element
void exchange(int *a, int *b);
//
#define exchange2(a,b) { int t;t=a;a=b;b=t;}//注意放在一行里
///
/*
 x=10; y=20
 x=20; y=10
 x=10; y=20
 */
int main(int argc, const char * argv[]) {
    // insert code here...
    int x=10;
    int y=20;
    printf("x=%d; y=%d\n",x,y);
    //交换元素
    exchange(&x,&y);
    printf("x=%d; y=%d\n",x,y);
    //交换元素
    exchange2(x,y);
    printf("x=%d; y=%d\n",x,y);
    return 0;
}
void exchange(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
