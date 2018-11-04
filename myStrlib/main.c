//
//  main.c
//  myStrlib
//
//  Created by 龚磊星 on 2018/10/8.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>
#include "myStr.h"
int main(int argc, const char * argv[]) {
    
    char firstNmae[100] = "";
    char *src = "gongleixing";
    printf("%s \n",myStrcpy(firstNmae, src));
    printf("firstName = %s \n",firstNmae);
    
    
    char aa[100] = "gong";
    char *bb = "leixing";
    printf("%s \n",myStrcat(aa, bb));
    
    
    char * strAry[10] = {"gong","lei","xing"};
    
    printf("%s\n",*strAry);
         
    return 0;
}
