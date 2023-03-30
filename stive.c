#include"stive.h"
Data top(Node *top){
	if (isEmpty(top)) return INT_MIN;
	return top->val;
}

void push(Node**top, Data v) {
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->val=v;
	newNode->next=*top;
	*top=newNode;
}

Data pop(Node**top) {
	if (isEmpty(*top)) return INT_MIN;
	Node *temp=(*top);
	Data aux=temp->val;
	*top=(*top)->next;
	free(temp);
	return aux;
}

int isEmpty(Node*top){
	return top==NULL;
}

void deleteStack(Node**top){
	Node  *temp;
	while (!isEmpty(*top))
	{
	    temp=*top;
		*top=(*top)->next;
		free(temp);
	}
}
void paranteze()
{
    char expresie[50];
    gets(expresie);
    Node *top=NULL;
    Data x=0;
    for(int i=0;i<strlen(expresie);i++)
    {
        //printf("n");
        if(expresie[i]=='(')
            push(&top,i);
        else if(expresie[i]==')')
        {
            if(!isEmpty(top))
                x=pop(&top);
            else
                push(&top,i);

        }
    }
    if(isEmpty(top))
        printf("Parantezele sunt inchise\n");
    else
    {
        printf("pozitiile incorecte sunt:");
        while(!isEmpty(top))
            {
                printf("%d",pop(&top));
            }
    }

}
