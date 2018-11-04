//
//  main.c
//  DynamicLinkList
//
//  Created by 龚磊星 on 2018/10/17.
//  Copyright © 2018年 龚磊星. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int data;
    struct node *next;
} Node;

Node * createList()
{
    Node * head = (Node *)malloc(sizeof(Node));
    head->next = NULL;
    
    Node * cur = NULL;
    
    int data = 0;
    printf("请输入数据:");
    scanf("%d",&data);
    
    while (data)
    {
        cur = (Node *)malloc(sizeof(Node));
        cur->data = data;
        
        cur->next = head->next;
        head->next = cur;
        scanf("%d",&data);
    }
    
    return head;
    
}


void NextNode(Node * head)
{
    head = head->next;
    while (head) {
        printf("%d \n",head->data);
        head = head->next;
    }
}

int main(int argc, const char * argv[]) {
    
    Node * head = createList();
    
    NextNode(head);
    
    return 0;
}
