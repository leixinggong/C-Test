//
//  main.c
//  二维数组
//
//  Created by 龚磊星 on 2018/9/25.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a[5] = {2,3,4};
    
    printf("a[0] = %d  0[a] = %d \n",a[0],0[a]);
    
    putchar(10);
    
    
    int array[4][4] = {0,1,1,1,2,0,2,2,3,3,0,3,4,4,4,0};
    int length = sizeof(array)/sizeof(array[0]);
    
    for (int i = 0; i < length; i++)
    {

        printf("%d \n",array[i][i]);
    }
    
    putchar(10);
    
    for (int i = 0; i < length; i++)
    {
        printf("%d \n",array[i][length - 1 -i]);
    }
    
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++) {
            
        }
    }
    
    putchar(10);
    
    
    for (int i = 0; i < length; i++) {
        
        for (int j = 0; j < length; j++) {
            
            printf("%d \t",array[i][j]);
        }
        putchar(10);
    }
    
    putchar(10);
    
    for (int i = 0; i < length - 1; i++) {
        
        for (int j = 0; j < length; j++) {
            
            if (i < j) {
                
                array[i][j] = array[i][j] ^ array[j][i];
                array[j][i] = array[j][i] ^ array[i][j];
                array[i][j] = array[i][j] ^ array[j][i];
            }
        }
    }
    
    for (int i = 0; i < length; i++) {
        
        for (int j = 0; j < length; j++) {
            
            printf("%d \t",array[i][j]);
        }
        putchar(10);
    }
    
    
    
    return 0;
}
