//
//  main.c
//  recursive
//
//  Created by 龚磊星 on 2018/10/3.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>

///有 5 个人坐在一起，问第 5 个人多少岁?他说比第 4 个人大 2 岁。问第 4 个人岁 数，
///他说比第 3 个人大 3 岁。问第 3 个人，又说比第 2 个人大 2 岁。
///问第 2 个人，说 比第 1 个人大 2 岁。最后问第 1 个人，他说是 10 岁。请问第 5 个人多大?
int getAge(int num)
{
    if (num == 1) {
        return 10;
    }else{
        return getAge(num-1) + 2;
    }
}


///猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。
///第二天 早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下的一 半零一个。
///到第 10 天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少?
int peachCount(int day)
{
    if (day == 10)
    {
        return 1;
    }
    else
    {
       return (peachCount(++day)+1) * 2;
    }
}



int * popSrot(int *arrays , int count)
{
    for (int i = 0; i < count - 1; i++) {
        
        for (int j = 0; j < count - i -1; j++) {
            
            if (arrays[j] > arrays[j+1])
            {
                arrays[j] = arrays[j] ^ arrays[j +1];
                arrays[j + 1] = arrays[j] ^ arrays[j +1];
                arrays[j] = arrays[j] ^ arrays[j +1];
            }
        }
    }
    
    return arrays;
}

void selectSrot(int * array , int count)
{
    int idx = 0 ;
    
    
    for (int i = 0; i < count - 1; i++) {
        
         idx = i;
        
        for (int j = i+1; j < count; j++) {
            
            if (array[i] > array[j])
            {
                idx = j;
            }
            
        }
        
        if (idx != i) {
            
            array[i] = array[i] ^ array[idx];
            array[idx] = array[i] ^ array[idx];
            array[i] = array[i] ^ array[idx];
        }
    }
}







int main(int argc, const char * argv[]) {
    
    
    int age = getAge(5);
    
    printf("age = %d \n",age);
    
    
    int number = peachCount(1);
    
    printf("一共摘了:%d个\n",number);
    
    
    int array[] = {0,7,9,67,54,23,65,34,85,75,174};
//    int *p = poSrot(array, sizeof(array)/sizeof(int));
    selectSrot(array, sizeof(array)/sizeof(int));
    int * p = array;
    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        printf("array[%d] = %d \n",i ,*p++);
    }
    putchar(10);
    
    
    
    
    return 0;
}
