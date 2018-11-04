//
//  main.c
//  stdlib time
//
//  Created by 龚磊星 on 2018/10/2.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    
    srand((int)time(NULL));
    
    int ra = rand() % 100;
    
    printf("rand = %d \n",ra);
    
    return 0;
}
