//
//  linkListLib.h
//  C-Language
//
//  Created by 龚磊星 on 2018/10/19.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#ifndef linkListLib_h
#define linkListLib_h

typedef struct node
{
    int data;
    struct node * next;
}Node;


Node * createList(void);

int insertNode(Node *head ,int data);

int listLength(Node * node);

Node * searchNode(Node *head,int pfind);

int deleteNode(Node *head,Node *target);

void srotPopListToval(Node * head , int len);

void srotPopListToref(Node * head , int len);

void reverseList(Node * head);


#endif /* linkListLib_h */
