//
//  Mystring.c
//  MyLibary
//
//  Created by 龚磊星 on 2018/10/29.
//  Copyright © 2018 龚磊星. All rights reserved.
//

#include "Mystring.h"
#include <string.h>


int mystrlen(char * str)
{
    int len = 0;
    while (*str++)
    {
        len++;
    }
    return len;
}

char * mystrcpy(char *dest , char * str)
{
    char * ret  = dest;
    
    while ((*dest++ = *str++));
    
    return ret;
}

char * mystrcat(char *dest , char * str)
{
    char * ret = dest;
    while (*dest) dest++;
    while ((*dest++ = *str++));
    return ret;
}

int mystrcmp(char * str1 , char * str2)
{
    for (; *str1&&*str2; str1++,str2++)
    {
        if (*str1 == *str2)
        {
            continue;
        }
        else
        {
            return *str1 - *str2;
        }
    }
    return *str1 - *str2;;
}
