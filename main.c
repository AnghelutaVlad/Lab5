#include"stive.h"
int main()
{
    Node* top;
    for(char i='b';i<'f';i++)
    {

        push(&top,i);
    }
    while(!isEmpty(top))
    {
        printf("%c",pop(&top));
    }
    deleteStack(&top);
    printf("%d",isEmpty(top));
}
