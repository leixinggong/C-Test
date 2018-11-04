//
//  main.c
//  内存对齐
//
//  Created by 龚磊星 on 2018/10/14.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>

#pragma pack()


struct stu {
    char a;
    int c;
    short b;
};

struct Preson {
    
    
    char sex;
    char * name;
    int age;
    float money;
    
} PRE;

/**
 内存对齐规则:
 x86(linux 默认#pragma pack(4))。linux 最大支持 4字节对齐
 window默认#pragma pack(8)
 macOS 默认支持pack(8)
 
 1.取出 pack(n)的值 (n = 1,2,4,8,...),取出结构体中最大类型的字节数 m; 将n 与 m 比较取最小值的Y ，两者取小即为外对齐 大小 Y= (m<n:m,n);
 2.将每一个结构体的成员大小与 Y 比较取小者为 X,作为内对齐大小
 3.所谓按 X 对齐，即为地址(设起始地址为 0)能被 x 整除的地方开始存放数据
 4.外部对齐原则是依据 Y 的值(Y 的最小整数倍)，进行补空操作;(struct的大小 必须是Y的最小整数倍)
 */

int main(int argc, const char * argv[]) {
    
    
    printf("stu size = %ld \n",sizeof(struct stu));
    
    printf("preson size = %ld \n",sizeof(PRE));
    
    return 0;
}
