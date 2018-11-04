//
//  main.c
//  stack heap
//
//  Created by 龚磊星 on 2018/10/8.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char * argv[]) {
    
    int *a = malloc(sizeof(int));
    
    *a = 100;
    
    printf("%d \n%p \n",*a,&a);
    
    free(a);
    
    a = calloc(1, sizeof(int));
    
    *a  = 200;
    
    free(a);
    
    printf("%d \n%p \n",*a,&a);
    
    printf("%lu \n \n",sizeof(void));
    
    
    return 0;
}
