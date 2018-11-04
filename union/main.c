//
//  main.c
//  union
//
//  Created by 龚磊星 on 2018/10/14.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>

union Client {
    int a;
    char b ;
};

int main(int argc, const char * argv[]) {
    
    union Client cli;
    cli.a = 0x12345678;
    
    printf("union Client size = %lu \n",sizeof(union Client));
    printf("%p \n%p \n%p \n",&cli,&cli.a,&cli.b);
    
    
    if (cli.b == *((char *)&cli.a)) {
        
        printf("小端序 \n");
        
    }else{
        
        printf("大端序");
        
    }
    
    
    
    
    
    
    
    return 0;
}
