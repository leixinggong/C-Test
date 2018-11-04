//
//  FileCode.c
//  FILE
//
//  Created by 龚磊星 on 2018/10/28.
//  Copyright © 2018 龚磊星. All rights reserved.
//

#include "FileCode.h"
#include <stdio.h>

void TestFile(void)
{
    FILE * fp = fopen("/Users/gongleixing/Desktop/C-Language/FILE/file.txt", "w+");
    
    int ret = fputs("qwertyuiop", fp);
    
    if (ret < 0)
    {
        printf("putFile error");
    }
    
    rewind(fp);
    
    char buf[1024];
    
    fgets(buf,100, fp);
    
    printf("ret = %s\n",buf);
    
    fclose(fp);
    
}

