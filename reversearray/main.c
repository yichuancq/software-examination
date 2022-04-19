//
//  main.c
//  reversearray
//
//  Created by yichuan on 2022/4/19.
//

#include <stdio.h>
#define N 10
///将一个数组逆序输出。
///用第一个与最后一个交换。
int main(int argc, const char * argv[]) {
    // insert code here...
    int a[N]={0,1,2,3,4,5,6,7,8,9};
    int i,t;
    printf("原始数组是:\n");
    for(i=0;i<N;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<N/2;i++){
        t=a[i];
        a[i]=a[N-1-i];
        a[N-1-i]=t;
    }
    printf("\n排序后的数组:\n");
    for(i=0;i<N;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
