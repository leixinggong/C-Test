//
//  myStr.c
//  myStrlib
//
//  Created by 龚磊星 on 2018/10/8.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include "myStr.h"


int myStrlen(char * src)
{
    int len = 0;
    
    while (*src++)
    {
        len++;
    }
    return len;
}


char * myStrcpy(char * dest , char * src)
{
    char * reDest = dest;
    while ((*dest++ = *src++));
    return reDest;
}


char * myStrcat(char * dest , char * src)
{
    char * reDest = dest;
    while (*dest) dest++;
    while ((*dest++ = *src++));
    return reDest;
}




