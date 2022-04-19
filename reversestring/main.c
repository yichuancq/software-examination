//
//  main.c
//  reversestring
//
//  Created by yichuan on 2022/4/20.
//
//编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 s 的形式给出。
//不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题
#include <stdio.h>
void reverseString(char* s, int sSize);
//交换元素
void swap(char *i,char *j);

int main(int argc, const char * argv[]) {
    // insert code here...
    char s[]={'a','b','c','d','e'};
    for(int i=0;i<5;i++){
        printf("%d\r\n",s[i]);
    }
    reverseString(s, 5);
    printf("\r\n交换顺序后\r\n");
    for(int i=0;i<5;i++){
        printf("%d\r\n",s[i]);
    }
    return 0;
}
//将输入的字符串反转
void reverseString(char* s, int sSize){
    if(s==NULL || sSize==0){
        return;
    }
    //第一个和n个位置交换，第二个和n-1个位置交换
    for (int i = 0, j = sSize- 1; i <sSize/2; i++, j--) {
        //swap(a,b);
        //取地址
        swap(&s[i],&s[j]);
    }
}
// 交换
void swap(char *a,char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
    return;
}

