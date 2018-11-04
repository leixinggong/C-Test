//
//  main.c
//  二分查找法
//
//  Created by 龚磊星 on 2018/9/24.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    
    int array[] = {0,7,9,67,54,23,65,34,85,75,174};
    
    int temp = 0;
    
    int length = sizeof(array) / sizeof(int);
    
    int index = -1;
    
    for (int i = 0 ; i < length -1; i++) {
        index = i;
        for (int j = i + 1; j < length; j++) {
            
            if (array[index] > array[j])
            {
                index = j;
            }
        }
        
        if (index != i)
        {
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }
    }
    
    
    for (int i = 0; i < length; i++)
    {
        printf("%d \t",array[i]);
    }
    
    putchar(10);
   
    /// 二分查找法
    int low = 0;
    int height = length - 1;
    int mid = 0;
    int findData = 67;
    index = -1;
    
    while (low <= height)
    {
        mid =(low + height) /2;
        
        if (array[mid] == findData)
        {
            index = mid;
            break;
        }
        
        if (array[mid] < findData) {
            low = mid + 1;
        }
        
        if (array[mid] > findData) {
            height = mid - 1;
        }
    }
    
    if (index == -1)
    {
        printf("没有找到\n");
    }
    else
    {
        printf("array[%d] = %d \n",index,array[index]);
    }
    
    return 0;
}



