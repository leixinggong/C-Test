//
//  MyLinkList.c
//  MyLibary
//
//  Created by 龚磊星 on 2018/11/3.
//  Copyright © 2018 龚磊星. All rights reserved.
//

#include "MyLinkList.h"


EleNode * createNode(void)
{
    EleNode * ele = (EleNode *)malloc(sizeof(EleNode));
    if (NULL == NULL)
    {
        printf("create error");
        return NULL;
    }
    return ele;
}

void insetNode(EleNode *head , int data)
{
    EleNode *ele = (EleNode *)malloc(sizeof(EleNode));
    ele->data = data;
    ele->next = head->next;
    head->next = ele;
}

void removeNode(EleNode *head,EleNode * target)
{
    while (head->next != target) head = head->next;
    head->next = head->next->next;
    free(target);
}

int lengthNode(EleNode *head)
{
    int len = 0;
    head = head->next;
    while (head)
    {
        len++;
        head = head->next;
    }
    return len;
}

EleNode * searchNode(EleNode * head ,int data)
{
    head = head->next;
    while (head->data != data)
    {
        head = head->next;
    }
    return head;
}

void srotPopListToval(EleNode * head , int len)
{
    
    EleNode *cur = NULL;
    
    for (int i = 0; 0 < len - 1; i++)
    {
        cur = head->next;
        for (int j = 0; i < len-i-1; j++)
        {
            if (cur->data > cur->next->data)
            {
                cur->data = cur->data ^ cur->next->data;
                cur->next->data = cur->data ^ cur->next->data;
                cur->data = cur->data ^ cur->next->data;
            }
            cur = cur->next;
        }
    }
}

void srotPopListToref(EleNode * head , int len)
{
    EleNode * sh, *p ,*q;
    
    EleNode * temp;
    
    for (int i = 0; i < len - 1; i ++)
    {
        sh = head;
        p = sh->next;
        q = p ->next;
        
        for (int j = 0; j < len - i - 1; j++)
        {
            if (p->data > q->data)
            {
                sh->next = q;
                p->next = q->next;
                q->next = p;
                
                temp = q;
                q = p;
                p = temp;
            }
            
            sh = sh->next;
            p = p->next;
            q = q->next;
        }
    }
}

void reverseList(EleNode * head)
{
    EleNode *p ,*q;
    
    p = head->next;
    head->next = NULL;
    
    while (p)
    {
        
        q = p->next;  // 先将p->next保存起来等于q  现在的q是后面所有节点的头
        p->next = head->next; // 将摘出来的p->next = head -> next;
        head->next = p;  /// head->next -> p
        
        p = q;  //之前保存起来的q  赋值给p开启第二轮循环
    }
    
    
}
