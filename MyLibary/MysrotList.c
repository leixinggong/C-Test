//
//  MysrotList.c
//  MyLibary
//
//  Created by 龚磊星 on 2018/10/29.
//  Copyright © 2018 龚磊星. All rights reserved.
//

#include "MysrotList.h"
#include <stdio.h>


int * popSrotList(int ary[],int len)
{
    
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (ary[j] > ary[j+1])
            {
                ary[j] = ary[j] ^ ary[j+1];
                ary[j+1] = ary[j] ^ ary[j+1];
                ary[j] = ary[j] ^ ary[j+1];
            }
        }
    }
    return ary;
}

int * selectSrotList(int ary[],int len)
{
    
    int idx = 0;
    
    for (int i = 0; i < len - 1; i++)
    {
        idx = i;
        
        for (int j = i; j < len; j++)
        {
            if (ary[idx] > ary[j])
            {
                idx = j;
            }
        }
        
        if (idx != i)
        {
            ary[i] = ary[idx] ^ ary[i];
            ary[idx] = ary[idx] ^ ary[i];
            ary[i] = ary[idx] ^ ary[i];
        }
    }
    return ary;
}


int * binarysSearch(int ary[] ,int finddata , int len)
{
    
    int low = 0;
    int height = len - 1;
    int mid = 0;
    int idx = -1;
    
    while (low <= height)
    {
        mid = (low + height) / 2;
        
        if (ary[mid] == finddata)
        {
            idx = mid;
            break;
        }
        
        if (ary[mid] < finddata)
        {
            low = mid+1;
        }
        
        if (ary[mid] > finddata)
        {
            height = mid - 1;
        }
    }
    
    
    
    return NULL;
}
