#include"stive.h"
#include"cozi.h"
int main()
{
    Queue* q=NULL;
    int n=5;
    for(Data i=0;i<n;i++)
    {
        enQueue(q,i);
    }
    reversal(q);
    while(!isempty(q))
    {
        printf("%d",deQueue(q));
    }
}
