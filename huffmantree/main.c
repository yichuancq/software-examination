//
//  main.c
//  HuffmanTree
//
//  Created by yichuan on 2022/4/17.
//

#include "huffmantree.h"
int main(void)
{
    int w[5] = {2, 8, 7, 6, 5};
    int n = 5;
    HuffmanTree htree;
    HuffmanCode htable;
    CreateHuffmanTree(&htree, w, n);
    HuffmanCoding(htree, &htable, n);
    PrintHuffmanCode(htable,w, n);
    return 0;
}
