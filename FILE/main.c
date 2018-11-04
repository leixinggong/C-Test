//
//  main.c
//  FILE
//
//  Created by 龚磊星 on 2018/10/23.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>
#include "FileCode.h"

int main(int argc, const char * argv[]) {
    
    
#if 0
    FILE * fp = fopen("/Users/gongleixing/Desktop/file.txt", "w");

    if (NULL == fp)
    {
        printf("alloc close");
        exit(-1);
    }

    fputs("gongleixing", fp);

    fclose(fp);


    
    
    FILE * fp = fopen("/Users/gongleixing/Desktop/file.txt", "r");
    
    FILE * fpw = fopen("/Users/gongleixing/Desktop/file1.txt", "a");
    
    char ret;
    
//  while ((ret = fgetc(fp)) && !feof(fp))
    while((ret = fgetc(fp)) != EOF)
    {
        printf("%c\n",ret);
        
        fputc(ret, fpw);
    }
     fputc('\n',fpw);
    
    fclose(fp);
    fclose(fpw);
    
#endif
    
    
    TestFile();
    
    
    
    return 0;
}


