//
//  main.c
//  指针(refrence)
//
//  Created by 龚磊星 on 2018/9/27.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
#if 0
    char a;
    short b;
    int c;
    long long  d;
    
    float f;
    double g;
    
    printf("a = %p \n",&a);
    printf("b = %p \n",&b);
    printf("c = %p \n",&c);
    printf("d = %p \n",&d);
    printf("f = %p \n",&f);
    printf("g = %p \n",&g);

    
#endif
    

    int arg = 200;
    
    int * p  = &arg;
    
    printf("p = %d \n",*p);
    
    printf("sizeof(p) = %lu \n",sizeof(p));
    
    
    int array[10] = {0,10,20,30,40,50,60,70,80,90};
    int length = sizeof(array) / sizeof(int);
    
    p = array;
    
    for (int i = 0; i < length; i++)
    {
        printf("array[%d] = %d \n",i, *(&array[i]));
    }
    
    
    putchar(10);
    
    char c;
    short s;
    int i;
    float f;
    double d;
    
    printf("sizeof(*c) = %lu \n",sizeof(&c));
    printf("sizeof(*s) = %lu \n",sizeof(&s));
    printf("sizeof(*i) = %lu \n",sizeof(&i));
    printf("sizeof(*f) = %lu \n",sizeof(&f));
    printf("sizeof(*d) = %lu \n",sizeof(&d));
    
    putchar(10);
    
    
    printf("array[0] = %d \n",*p);
    
    for (int i = 0; i < length; i++)
    {
        printf("array[%d] = %d \n",i,*(p++));
        
    }
    
    printf("array[0] = %d \n",*p);
    printf("&p = %p\n",p);
    
    
    
    
    int  in = 0x12345678;
    
    printf("=====%x \n",*((char  *)&in));
    
    printf("\n");
    
    int a1 = 0x10000000;
    
    long * p1 = (long *)a1;
    
    printf("%x \n",a1);
    printf("%x \n",p1 + 1);
    
    putchar(10);
    
    printf("sizeof(long long) = %lu \n",sizeof(long long));
    printf("sizeof(long) = %lu \n",sizeof(long));
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
