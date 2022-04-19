//
//  main.c
//  arrays
//
//  Created by yichuan on 2022/4/19.
//

#include <stdio.h>
#include "arrays.h"

int main(int argc, const char * argv[]) {
    // insert code here...
   // double balance[5] = {1000.0, 2.0, 3000.4, 7.0, 50.0};
   // double maxval=max(balance,5);
   // printf("\r\nmax val=%f\r\n",maxval);
    // printf("%f",balance[4]);
    //
    /* 一个指向整数的指针 */
    int *p;
    int i;
    p = getRandom();
    for ( i = 0; i < 10; i++ ){
        printf( "*(p + %d) : %d\n", i, *(p + i));
    }
    return 0;
}
