//
//  main.c
//  myStr*
//
//  Created by 龚磊星 on 2018/10/6.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>

char * myStrcpy(char * dest , char * src)
{
    char * retDest = dest;
    while ((*dest = *src) != '\0')
    {
        dest++;
        src++;
    }
    return retDest;
}

int myStrlen(char * src)
{
    int len = 0;
    
    while (*src != '\0')
    {
        src++;
        len++;
    }
    
    return len;
}

char * myStrcat(char *dest , char * src)
{
    char * retDest = dest;
    
    char *p;
    for ( p = dest; *p != '\0'; p++);
    
    for (char * q = src; (*p = *q); p++,q++);
    
    return retDest;
}


//int myStrcmp(char * str1 , char * str2)
//{
//    for (; *str1&&*str2 ; <#increment#>) {
//        <#statements#>
//    }
//}


int main(int argc, const char * argv[]) {
    
    
    char dest [1024] = "";
    char * src = "hello world";
    
    char * str = myStrcpy(dest, src);
    printf("myStrCopy = %s \n",str);
    
    printf("myStrlen = %d \n",myStrlen(src));
    
    char  firstName[1024] = "gong";
    char  lastName[1024] = "leixing";
    
    printf("%s \n",myStrcat(firstName, lastName));
    
//    printf("strcmp = %d",)
    
    
    
    return 0;
}
