#include"cozi.h"
#include"stive.h"
Queue* createQueue(){
	Queue *q;
	q=(Queue *)malloc(sizeof(Queue));
	if (q==NULL) return NULL;
	q->front=q->rear=NULL;
	return q;
}

 void enQueue(Queue*q, Data v){
	Nodeq* newNode=(Nodeq*)malloc(sizeof(Nodeq));
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
	Nodeq* aux; Data d;
	if (isempty(q)) return INT_MIN;

	aux=q->front;
	d=aux->val;
	q->front=(q->front)->next;
	free(aux);
	return d;
}
void deleteQueue(Queue*q){
	Nodeq* aux;
	while (!isempty(q)){
		aux=q->front;
		q->front=q->front->next;
		free(aux);
	}
	free(q);
}
void reversal(Queue*q)
{
    Node* top=NULL;
    Data x;
    while(!isempty(q))
    {
        x=deQueue(q);
        push(&top,x);
    }
    while(!isEmpty(top))
    {
        x=pop(&top);
        enQueue(q,x);
    }
    return;
}
