//
//  arrays.c
//  arrays
//
//  Created by yichuan on 2022/4/19.
//

#include "arrays.h"
//求数组最大值
double max(double arrays[], int size){
    double tempMax=0;
    for(int i=0;i<size;i++){
        printf("\r\narray: %f",arrays[i]);
        if(arrays[i]>=tempMax){
            tempMax=arrays[i];
        }
    }
  
    return tempMax;
}

///fun_array
int *fun_array(int n){
    int array[n];
    for(int i=0;i<n;i++){
        array[i]=i;
    }
    return  array;
}
/*要生成和返回随机数的函数*/
int * getRandom(){
  static int  r[10];
  int i;
  /* 设置种子 */
  srand( (unsigned)time( NULL ) );
  for ( i = 0; i < 10; ++i){
     r[i] = rand();
     printf( "r[%d] = %d\n", i, r[i]);
  }
  return r;
}
