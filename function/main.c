//
//  main.c
//  function
//
//  Created by 龚磊星 on 2018/10/2.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>

void  addValue( int * refrenceValue )
{
    (*refrenceValue)++;
}


void swap(int * a , int * b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}


int main(int argc, const char * argv[]) {
    
    
    int a = 4;
    addValue(&a);
    
    printf("a = %d \n",a);
    
    int  b = 100;
    
    swap(&a, &b);
    
    printf("a = %d , b = %d \n",a,b);
    
    
    return 0;
}
