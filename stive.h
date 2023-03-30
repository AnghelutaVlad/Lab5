#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int Data;
struct node{
              Data val;
              struct node* next;
           };
typedef struct node Node;
Data top(Node *top);
void push(Node**top, Data v);
Data pop(Node**top);
int isEmpty(Node*top);
void deleteStack(Node**top);
void paranteze();
