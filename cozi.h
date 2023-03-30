#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef int Data;
struct nod{
             Data val;
             struct nod* next;
          };
typedef struct nod Nodeq;
struct date{
               Nodeq *front;
               Nodeq *rear;
           };
typedef struct date Queue;
Queue* createQueue();
void enQueue(Queue*q, Data v);
int isempty(Queue*q);
Data deQueue(Queue*q);
void deleteQueue(Queue*q);
void reversal(Queue*q);
