#include<bits/stdc++.h>
#define STACK_MAX 100


typedef struct {

int top;
int data[STACK_MAX ];

}Stack;

void push(Stack *s,int item)
{
    if(s->top < STACK_MAX)
    {
        s->data[s->top]=item;
        s->top=s->top+1;
    }


    else
    {
        printf("stacl is full\n");
    }
}

int pop(Stack *s)
{
    int item;
    if(s->top==0)
    {
      printf("stacl is empty\n");
        return -1;
    }
    else
    {
        s->top=s->top-1;
        item=s->data[s->top];
    }
    return item;
}

int main()
{


    Stack s1;
    int item;

    s1.top=0;
    push(&s1,1);
    push(&s1,2);
    push(&s1,30);

    item=pop(&s1);
    printf("item is %d\n",item);
    item=pop(&s1);
    printf("item is %d\n",item);
    item=pop(&s1);
    printf("item is %d\n",item);


}
