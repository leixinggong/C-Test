//
//  main.c
//  C-Language
//
//  Created by 龚磊星 on 2018/9/22.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    
    char ch = 12;
    short sh = 123;
    int in = 124;
    long long llvar = 1234;
    
    printf("sizeof(int) = %lu \n",sizeof(in));
    printf("sizeof(short) = %lu \n",sizeof(sh));
    printf("sizeof(char + short) = %lu \n",sizeof(ch + sh));
    printf("sizeof(char) = %lu \n",sizeof(ch+llvar));
    
    for (int i = 'a'; i < 'z'; i++)
    {
        printf("%c---%d \n",i-' ',i-' ');
    }
    
    unsigned char ascii;
    
    for (ascii = 0; ascii < 128; ascii ++) {
        
        printf("%d-->%c\t\t", ascii,ascii); if(ascii%8 == 0)
            printf("\n");
    }
    
    return 0;
}
