//
//  product.h
//  sort
//
//  Created by yichuan on 2022/4/20.
//

#ifndef product_h
#define product_h
#include <stdio.h>
//宏定义
#define SIZE 10

/*商品结构体*/
struct Product{
    /*品牌**/
    char brand[150];
    /*名称*/
    char name[150];
    /*价格*/
    float price;
};
/*用Product标签的结构体，另外声明了变量product */
struct Product product;
/*用Product标签的结构体，另外声明了变量products 数组类型 */

struct Product products[SIZE];
#endif /* product_h */
