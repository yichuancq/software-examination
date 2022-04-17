//
//  sort.h
//  ruankao
//
//  Created by 易川 on 2022/3/4.
//

#ifndef sort_h
#define sort_h
/*数组大小*/
#define arraysize 7
#include <stdio.h>
/* 初始化数组元素 */
const static double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
/* 数组打印*/
int *show_array(int numbers[]);
/* 冒泡排序*/
int *bubber_sort(int numbers[]);
/*并归排序*/
void merge_sort(int arr[],const int len);
/*插入排序，从小到大排序*/
int *insert_sort(int numbers[]);
/*选择排序*/
int *select_sort(int numbers[]);
/* 函数声明 */
void swap(int numbers[],int j);
#endif /* sort_h */

//从大到小排序
//int *insert_sort(int numbers[]){
//    printf("\r\n===插入排序===\r\n");
//    int start;
//    int i; //控制最外层循环
//    int j; //比较第一个元素后面的元素
//    int k; //插入前面元素，比较位置大小
//    for(i=0;i<arraysize;i++){
//        start=numbers[i];
//        for(j=i+1;j<arraysize;j++){
//            //如何后一个元素比前一个大，插入前面合适的位置
//            if(numbers[j]>=start){
//                for(k=0;k<i;k++){
//                    if(numbers[k]<numbers[j]){
//                        //交换元素位置
//                        int temp=numbers[k];
//                        numbers[k]=numbers[j];
//                        numbers[j]=temp;
//                    }
//                    else{
//                        //不改变元素位置
//                    }
//                }
//            }
//        }
//
//    }
//    return numbers;
//}
