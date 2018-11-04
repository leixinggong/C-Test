//
//  main.c
//  Struct
//
//  Created by 龚磊星 on 2018/10/11.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

typedef struct Student {
    
    char name[100];
    int age;
    char sex;
    float height;
    float weight;
} STU;


int main(int argc, const char * argv[]) {
    
    
    STU stu;
    
    stu.age = 10;
    stu.height = 175.0;
    strcpy(stu.name, "gongleixing");
    printf("sizeof(name) = %lu \n",sizeof(stu.name));
    printf("sizeof(stu) = %lu \n",sizeof(stu));
    printf("age = %d , height = %.1f \n",stu.age,stu.height);
    
    printf("stu = %p \n",&stu);
    printf("stu.age = %p \n",&stu.age);
    printf("height = %p \n",&stu.height);
    
    return 0;
}
