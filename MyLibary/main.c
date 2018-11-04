//
//  main.c
//  MyLibary
//
//  Created by 龚磊星 on 2018/10/29.
//  Copyright © 2018 龚磊星. All rights reserved.
//

#include <stdio.h>
#include "Mystring.h"

int main(int argc, const char * argv[]) {
    
    
    char dest[100] = "gong";
    
    char * str = "leixing";
    
    mystrcat(dest, str);
    
    printf("%s\n",dest);
    
    return 0;
}
