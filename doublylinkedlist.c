#include<stdio.h>
#include<stdlib.h>
void insertbegin();
void insertend();
void insertpos();
void deletebegin();
void deleteend();
void deletepos();
void display();
struct node
{
int data;
struct node *next;
struct node *pre;
} *newnode,*temp,*ptr;
struct node *head=0;
int main()
{
int n;
printf("**main menu**\n1.insert at beginning\n2.insert at end\n3.insert at given position\n4.delete at beginning\n5.delete from end \n6.delete from given position\n7.exit\n\n");
while(1)
{
printf("enter your choice");
scanf("%d",&n);
switch(n)
{
case 1:insertbegin();
	break;
case 2:insertend();
	break;
case 3:insertpos();
	break;
case 4:deletebegin();
	break;
case 5:deleteend();
	break;
case 6:deletepos();
	break;
case 7:exit(0);
default:printf("invalid choice");
}
}
return 0;
}
void insertbegin()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->pre=0;
if(head==0)
{
head=temp=newnode;
}
else
{
newnode->next=head;
head->pre=newnode;
head=newnode;
}
display();
}
void insertend()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=0;
temp=head;
while(temp->next!=0)
{
temp=temp->next;
}
temp->next=newnode;
newnode->pre=temp;
display();
}

void display()
{
temp=head;
while(temp!=0)
{
printf("%d->",temp->data);
temp=temp->next;
}
printf("\n\n");
}
void insertpos()
{
int pos;
temp=head;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=0;
printf("enter the position you want to insert");
scanf("%d",&pos);
while(temp->data!=pos)
{

temp=temp->next;
}
ptr=temp;
newnode->next=ptr->next;
ptr->next->pre=newnode;
ptr->next=newnode;
newnode->pre=ptr;
display();
}
void deletebegin()
{
	if(head == NULL)
        printf("The list is empty");
	else
	{
	temp=head;
	head->next->pre=NULL;
	head=head->next;
	free(temp);
	}
	display();
}

void deleteend()
{
if(head==0)
{
printf("underflow");
}
else
{
temp=head;
while(temp->next!=0)
{
 temp=temp->next;
}
 temp->pre->next=0;
 free(temp);
} 
display();
}
void deletepos()
{
int p;
printf("enter a position");
scanf("%d",&p);
if(head==0)
{
printf("underflow");
}
else
{
temp=head;
ptr=temp;
while(temp->data!=p)
{
temp=temp->next;
}
ptr=temp->next;
ptr->pre=temp;
temp->next=ptr->next;
free(ptr);
}
display();
}
