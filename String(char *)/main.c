//
//  main.c
//  String(char *)
//
//  Created by 龚磊星 on 2018/10/4.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
#if 0
    
    char * str = "hello world";
    
    printf("%s \n",str);
    
    
    char * firstName = "gong\0";
    char * lastName = "leixing";
    
//    *(firstName+1) = 's';
    
    printf("sizeof(firstName) = %lu \n",sizeof(firstName));
    
    printf("strlen(firstName) = %lu \n",strlen(firstName));
    
    while (1) {
        
        
        printf("%c \n",*(firstName++));
        
        
//        if (*firstName == '\0')
//        {
//            break;
//        }
    }

#endif
    
    
    
    char firstName[30] = "jim "; char lastName[30] = "Green";
    char *p;
    
    
    for( p = firstName; *p != '\0';p++);
    
    
    for(char *q = lastName;  (void)(printf("%c \n",*q)) , *p = *q; p++,q++)
    {
       
    }
    printf("sizeof(lastName) = %lu \n",sizeof("Green"));
    printf("name = %s\n",firstName);
    
    char aa[100];
    char * bb = "china";
    
    printf("%s \n",strcat(aa, bb));
    
    printf("%d \n",strcmp("龚", "磊星"));

    
    return 0;
}
