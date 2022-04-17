//
//  linklist.h
//  ruankao
//
//  Created by 易川 on 2022/3/9.
//

#ifndef linklist_h
#define linklist_h

#include <stdio.h>
#include <stdlib.h>
#endif /* linklist_h */
typedef struct Link {
    int  elem;
    struct Link *next;
}link;

link *initLink(void);
//链表插入的函数，p是链表，elem是插入的结点的数据域，add是插入的位置
link * insertElem(link * p, int elem, int add);
//删除结点的函数，p代表操作链表，add代表删除节点的位置
link * delElem(link * p, int add);
//查找结点的函数，elem为目标结点的数据域的值
int selectElem(link * p, int elem);
//更新结点的函数，newElem为新的数据域的值
link *amendElem(link * p, int add, int newElem);
//显示元素
void display(link *p);
