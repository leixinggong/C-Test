//
//  MyLinkList.h
//  MyLibary
//
//  Created by 龚磊星 on 2018/11/3.
//  Copyright © 2018 龚磊星. All rights reserved.
//

#ifndef MyLinkList_h
#define MyLinkList_h

#include <stdio.h>
#include <stdlib.h>


typedef struct eledata {
    
    int data;
    struct eledata * next;
    
}EleNode;


EleNode * createNode(void);

void insetNode(EleNode *head , int data);

void removeNode(EleNode *head,EleNode * target);

int lengthNode(EleNode *head);

EleNode * searchNode(EleNode * head ,int data);

void srotPopListToval(EleNode * head , int len);

void srotPopListToref(EleNode * head , int len);

void reverseList(EleNode * head);


#endif /* MyLinkList_h */
