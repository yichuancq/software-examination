//
//  sort.c
//  ruankao
//
//  Created by 易川 on 2022/3/4.
//

#include <stdio.h>
#include <math.h>
#include "sort.h"
/*显示数组元素*/
int *show_array(int numbers[]){
    static int result[arraysize];
    printf("\r\n数组元素:\r\n");
    for(int i=0;i<arraysize;i++){
        printf("%d\t",numbers[i]);
        result[i]=numbers[i];
    }
    return result;
}
/*冒泡排序*/
int *bubber_sort(int numbers[]){
    printf("===冒泡排序===\r\n");
    for(int i=0;i<arraysize-1;i++){
        for(int j=arraysize-1;j>i;j--){
            if(numbers[j-1]>numbers[j]){
                //swap element
                swap(numbers,j);
            }
        }
    }
    return numbers;
};
/* swap element*/
void swap(int numbers[],int j){
    //swap element
    int temp=numbers[j-1];
    numbers[j-1]=numbers[j];
    numbers[j]=temp;
};

/*选择排序*/
int *select_sort(int numbers[]){
    printf("\r\n===选择排序===\r\n");
    int start;
    int min;
    for(int i=0;i<arraysize;i++){
        start=numbers[i];
        //printf("start:%d\r\n",start);
        // 默认第一个元素为最小值
        min=start;
        for(int j=i+1;j<arraysize;j++){
            if(numbers[j]<=min){
                //swap
                min=numbers[j];
                //printf("交换元素：number:[%d]->min:[%d]\r\n",numbers[j],min);
                int temp=numbers[j];
                numbers[j]=numbers[i];
                numbers[i]=temp;
            }else{
                //printf("不交换，继续\r\n");
            }
        }
    }
    return numbers;
    
}

/**/
void selection_sort(int a[], int len){
    int i,j,temp;
    for(i = 0;i<len-1;i++){
        // 记录最小值，第一个元素默认最小
        int min = i;
        // 访问未排序的元素
        for (j = i + 1; j < len; j++){
            // 找到目前最小值
            if (a[j] < a[min]){
                // 记录最小值
                min = j;
            }
        }
        if(min!=i){
            //交换两个变量
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
        /* swap(&a[min], &a[i]);  */   // 使用自定义函数交換
    }
}

/*
 void swap(int *a,int *b){
 // 交换两个变量
 int temp = *a;
 *a = *b;
 *b = temp;
 }
 */

/*插入排序*/
void insertion_sort(int arr[], int len){
    int i,j,temp;
    for (i=1;i<len;i++){
        temp = arr[i];
        for (j=i;j>0 && arr[j-1]>temp;j--)
            arr[j] = arr[j-1];
        arr[j] = temp;
    }
}

/*插入排序，从小到大排序*/
int *insert_sort(int numbers[]){
    printf("\r\n===插入排序===\r\n");
    int start;
    int i; //控制最外层循环
    int j; //比较第一个元素后面的元素
    int k; //插入前面元素，比较位置大小
    for(i=0;i<arraysize;i++){
        start=numbers[i];
        for(j=i+1;j<arraysize;j++){
            //如何后一个元素比前一个大，插入前面合适的位置
            if(numbers[j]<start){
                for(k=i;k>0;k--){
                    if(numbers[k]>numbers[j]){
                        //交换元素位置
                        int temp=numbers[k];
                        numbers[k]=numbers[j];
                        numbers[j]=temp;
                        break;
                    }
                    else{
                        //不改变元素位置
                    }
                }
            }
        }
        
    }
    return numbers;
}
/*希尔排序*/
void shell_sort(int arr[], int len) {
    int gap, i, j;
    int temp;
    for (gap = len >> 1; gap > 0; gap = gap >> 1)
        for (i = gap; i < len; i++) {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
                arr[j + gap] = arr[j];
            arr[j + gap] = temp;
        }
}

/*并归排序,递归法*/
void merge_sort_recursive(int arr[], int reg[], int start, int end) {
    if (start >= end)
        return;
    int len = end - start, mid = (len >> 1) + start;
    int start1 = start, end1 = mid;
    int start2 = mid + 1, end2 = end;
    merge_sort_recursive(arr, reg, start1, end1);
    merge_sort_recursive(arr, reg, start2, end2);
    int k = start;
    while (start1 <= end1 && start2 <= end2)
        reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
    while (start1 <= end1)
        reg[k++] = arr[start1++];
    while (start2 <= end2)
        reg[k++] = arr[start2++];
    for (k = start; k <= end; k++)
        arr[k] = reg[k];
}
/*并归排序*/
void merge_sort(int arr[], const int len) {
    printf("\r\n===并归排序===\r\n");
    int reg[len];
    merge_sort_recursive(arr, reg, 0, len - 1);
}
/*迭代法**/
/*
 int min(int x, int y) {
     return x < y ? x : y;
 }
 void merge_sort(int arr[], int len) {
     int* a = arr;
     int* b = (int*) malloc(len * sizeof(int));
     int seg, start;
     for (seg = 1; seg < len; seg += seg) {
         for (start = 0; start < len; start += seg + seg) {
             int low = start, mid = min(start + seg, len), high = min(start + seg + seg, len);
             int k = low;
             int start1 = low, end1 = mid;
             int start2 = mid, end2 = high;
             while (start1 < end1 && start2 < end2)
                 b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
             while (start1 < end1)
                 b[k++] = a[start1++];
             while (start2 < end2)
                 b[k++] = a[start2++];
         }
         int* temp = a;
         a = b;
         b = temp;
     }
     if (a != arr) {
         int i;
         for (i = 0; i < len; i++)
             b[i] = a[i];
         b = a;
     }
     free(b);
 }
 */

/*找线性数组的最小值*/
int min_nubmer_inarray(int numbers[]){
    int min;
    min = numbers[0];
    int i;
    for(i=0;i<arraysize;i++){
        //  printf("numbers[%d]:%d\r\n",i,numbers[i]);
        if(numbers[i]<min){
            min=numbers[i];
            // printf("min:%d\r\n",min);
        }
    }
    //printf("min = %d\n", min);
    return min;
}
