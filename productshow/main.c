//
//  main.c
//  productshow
//
//  Created by yichuan on 2022/4/20.
//



#include "/Users/yichuan/Documents/software examination/product/product.h"
#include <stdlib.h>
//导入这个，名称赋值
#include <stdio.h>
#include <string.h>
//显示商品信息
void showProduct(struct Product *p);
//void showProduct();
//创建商品信息
struct products *createProduct(int size);
//
int main(int argc, const char * argv[]) {
    //
    struct products *p=createProduct(SIZE);
    showProduct(p);
    return 0;
}
void showProduct(struct Product *p){
    //struct Product products[SIZE];
    for(int i=0;i<SIZE;i++){
       //printf("\r\n 手机品牌:%s, 名称:%s, 价格:%1f",products[i].name,products[i].brand,products[i].price);
        printf("\r\n手机品牌:%s,\t名称:%s, \t价格:%1f",(*(p+i)).brand,(*(p+i)).name,(*(p+i)).price);
    }
    printf("\r\n");
    
}
///
struct products *createProduct(){
    //struct Product products[SIZE]={
    //  {"大米1","手机1",4545.9},
    //  {"大米2","手机2",7766},
    //  {"大米3","手机3",9999}};
    //products[SIZE];
    for(int i=0;i<SIZE;i++){
        //"大米"+(char)i
        //printf("%s ",c);
        strcpy(products[i].brand,"大米");
        strcpy(products[i].name,"手机");
        products[i].price=(1000.00+i);
    }
    return products;
}
