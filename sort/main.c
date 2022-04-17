//
//  main.c
//  sort
//
//  Created by yichuan on 2022/4/17.
//

#include <stdio.h>
#include "sort.h"
int main(int argc, const char * argv[]) {
    // insert code here...
    int array[]={1,4,2,5,6,8,10};
    show_array(array);
    printf("\r\n");
    bubber_sort(array);
    show_array(array);
    return 0;
}
