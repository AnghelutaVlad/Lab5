#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef int Data;
struct nod{
             Data val;
             struct nod* next;
          };
typedef struct nod Node;
struct date{
               Node *front;
               Node *rear;
           };
typedef struct date Queue;
Queue* createQueue(){
	Queue *q;
	q=(Queue *)malloc(sizeof(Queue));
	if (q==NULL) return NULL;
	q->front=q->rear=NULL;
	return q;
}

 void enQueue(Queue*q, Data v){
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->val=v;
	newNode->next=NULL;
	if (q->rear==NULL) q->rear=newNode;
	else{
		(q->rear)->next=newNode;
		(q->rear)=newNode;
	}
	if (q->front==NULL) q->front=q->rear;
}
int isempty(Queue*q){
	return (q->front==NULL);
}
Data deQueue(Queue*q) {
	Node* aux; Data d;
	if (isempty(q)) return INT_MIN;

	aux=q->front;
	d=aux->val;
	q->front=(q->front)->next;
	free(aux);
	return d;
}
void deleteQueue(Queue*q){
	Node* aux;
	while (!isempty(q)){
		aux=q->front;
		q->front=q->front->next;
		free(aux);
	}
	free(q);
}

