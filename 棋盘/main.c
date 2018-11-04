//
//  main.c
//  棋盘
//
//  Created by 龚磊星 on 2018/9/27.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    
    int array[10][10] = {0};
    int length = sizeof(array)/sizeof(array[0]);
    
    srand(time(NULL));
    
    int x = 0;
    int y = 0;
    
    int index = 0;
    
    while (1) {
        
        x = rand() % 10;
        y = rand() % 10;
        
        if(array[x][y] == 0)
        {
            array[x][y] = 1;
            
            index++;
            
            if (index == 10) {
                break;
            }
        }
    }
    
    
    
    for (int i = 0; i < length; i++) {
        
        for (int j = 0; j < length; j++) {
            
            printf("%d \t",array[i][j]);
        }
        
        printf("\n\n");
    }
    
    putchar(10);
    putchar(10);
    
    int ab[10] = {0};
    int cd[10] = {0};
    int count = sizeof(ab) / sizeof(int);
    
    for (int i = 0; i < length; i++) {
        
        for (int j = 0; j < length; j++) {
            
            if (array[i][j] == 1)
            {
                ab[i] += 1;
            }
            
            if (array[j][i] == 1)
            {
                cd[i] += 1;
            }
        }
    }
    
    for (int i = 0; i < count; i++) {
        printf("%d\t",ab[i]);
    }
    putchar(10);
    
    for (int i =0; i < count; i++) {
        
        printf("%d\t",cd[i]);
    }
    putchar(10);
    
    return 0;
}

