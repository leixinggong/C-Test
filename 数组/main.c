//
//  main.c
//  数组
//
//  Created by 龚磊星 on 2018/9/24.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>




int main(int argc, const char * argv[]) {

    int array[] = {0,7,9,67,54,23,65,34,85,75,174};
    
    int temp = 0;
    
    int length = sizeof(array) / sizeof(int);
    
    

    for (int i = 0; i < length - 1; i++) {
        
        for (int j = i + 1; j < length - 1 - i ; j++) {
            
            if (array[i] > array[j]) {
                
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    

    /*
    for (int i = 0; i < length; i++)
    {
        
        for (int j = 0; j < length - 1 - i ; j++)
        {
            
            if (array[j] > array[j+1]) {
                
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
        
    }
     */
    
    for (int i = 0; i < length; i++) {
        
        printf("%d\t",array[i]);
    }
    
    putchar(10);
    

    
    return 0;
}
