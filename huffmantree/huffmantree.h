//
//  huffmantree.h
//  HuffmanTree
//
//  Created by yichuan on 2022/4/17.
//

#ifndef huffmantree_h
#define huffmantree_h
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//哈夫曼树结点结构
typedef struct {
    int weight;//结点权重
    int parent, left, right;//父结点、左孩子、右孩子在数组中的位置下标
}HTNode, *HuffmanTree;
//动态二维数组，存储哈夫曼编码
typedef char ** HuffmanCode;
//HT数组中存放的哈夫曼树，end表示HT数组中存放结点的最终位置，s1和s2传递的是HT数组中权重值最小的两个结点在数组中的位置
void Select(HuffmanTree HT, int end, int *s1, int *s2);
//HT为地址传递的存储哈夫曼树的数组，w为存储结点权重值的数组，n为结点个数
void CreateHuffmanTree(HuffmanTree *HT, int *w, int n);
//HT为哈夫曼树，HC为存储结点哈夫曼编码的二维动态数组，n为结点的个数
void HuffmanCoding(HuffmanTree HT, HuffmanCode *HC,int n);
//打印哈夫曼编码的函数
void PrintHuffmanCode(HuffmanCode htable,int *w,int n);
#endif /* huffmantree_h */
