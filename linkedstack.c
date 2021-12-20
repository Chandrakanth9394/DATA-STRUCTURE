#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start=0,*top,*newnode;
void push();
void pop();
void display();
void peek();

void main()
{
 int op;
   while(1)
    {
        printf("\n Menu\n1.push\n2.pop\n3.display\n4.peek\n5.exit\nEnter your choice\t");
        scanf("%d",&op);
        switch(op)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:peek();
            break;
            case 5:exit(0);
            break;
           
        }
        
    }
}
void push()
{
    int c=1;
    while(c!=0)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data ");
    scanf("%d",&newnode->data);
    newnode->next=0;
     if(start==0)
        {
            start=newnode;
            
        }
        else
        
        newnode->next=start;
        start=newnode;
  printf("do you want to continue(0/1))");
        scanf("%d",&c); 
    }  
}

void pop()
{
    top=start;
if(top==0)
{
printf("underflow\n");
}
else
{
    start=start->next;
    top->next=0;
    free(top);
    printf("\nitem delted\n");
}

}
void display()
{
   top=start;
   printf("the stack elements are\n");
while(top!=0)
{
    printf("%d\n",top->data);
    top=top->next;
} 
}
void peek()
{
    top=start;
    if(top==0)
    {
        printf("stack underflow\n");
    }
    else
printf("%d is the peek",top->data);
}

