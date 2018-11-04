//
//  main.c
//  initStruct
//
//  Created by 龚磊星 on 2018/10/11.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Preson {
    
    char name[100];
    char * lastNmae;
    char sex;
    int age;
    float height;
    float weight;
} PRE;


struct MySize {
    
    float x;
    float y;
    float width;
    float height;
};

struct MySize Sum(struct MySize s1 ,struct MySize s2)
{
    struct MySize s;
    s.x = s1.x +s2.x;
    
    return s;
}

char * getMemory(int num)
{
    char array[100] = {'a','a','s','d','e','6','7'};
    
    return array;
}


int main(int argc, const char * argv[]) {
    
    
    struct Preson p = {"龚磊星","lx",'x',22,175,170};
    printf("%p \n",&p);
    printf("p.name = %s \n",p.name);
    printf("p.age = %d \n",p.age);
    
    
    struct Preson p1;
    p1.age = 18;
    p1.lastNmae = "wwww";
    strcpy(p1.name,"leixing");
    
    printf("++++++++++++++++++++++++++++++++ \n");
    putchar(10);
    
    struct Preson * pre = (struct Preson *)malloc(sizeof(struct Preson));
    
    free(pre);
    
    printf("%p \n",pre);
    
    pre->age = 10;
    strcpy(pre->name, "xxxxx");
    pre->lastNmae = "name";
    
    char * a = pre->lastNmae;
    /**
        char * p = "china"  储存的字符串 放在数据段的只读数据段不可以修改
        如果想要用指针偏移的方法修改 字符串 那么这个字符串应该用 char[]  储存  这样的字符串是可以修改的d
     */
    char aa[10] = "name";
    char * bb = aa;
    
    bb+=4;
    *bb = '3';
    
    
    
    

    struct MySize s1 = {1,1,1,1};
    struct MySize s2 = {2,2,2,2};
    
    struct MySize s3 =  Sum(s1, s2);

  
    printf("");
    
    char * ary = getMemory(100);
    for (int i = 0; i < 10; i++)
    {
        printf("%c \n",ary[i]);
    }
    
    
    
    
    
    return 0;
}
