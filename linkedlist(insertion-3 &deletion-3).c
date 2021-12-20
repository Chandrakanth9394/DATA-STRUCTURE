#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
} *newnode,*temp,*ptr;
struct node *head=0;
void insert_beging();
void insert_end();
void insert_pos();
void delete_beging();
void delete_end();
void delete_pos();
void display();
void main()
{
int n;
printf("**main menu**\n1.insert at beginning\n2.insert at end\n3.insert at given position\n4.delete at beginning\n5.delete from end \n6.delete from given position \n7.traverse  \n8.exit\n\n");
while(1)
{
printf("enter your choice");
scanf("%d",&n);
switch(n)
{
case 1:insert_beging();
	break;
case 2:insert_end();
	break;
case 3:insert_pos();
	break;
case 4:delete_beging();
	break;
case 5:delete_end();
	break;
case 6:delete_pos();
	break;
case 7:display();
  break;	
case 8:exit(0);
}
}
}
void insert_beging()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
head=temp=newnode;
}
else
{
newnode->next=head;
head=newnode;
}
}
void insert_end()
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
}
void display()
{
temp=head;
while(temp!=0)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("\n\n");
}
void insert_pos()
{
int pos;
temp=head;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=0;
printf("enter the position you want to insert");
scanf("%d",&pos);
while(temp->next!=0)
{
if(temp->data==pos)
{
break;
}
temp=temp->next;
}
newnode->next=temp->next;
temp->next=newnode;
}
void delete_beging()
{
if(head==0)
{
printf("underflow");
}
else
{
temp=head;
head=head->next;
free(temp);
}
}
void delete_end()
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
ptr=temp;
temp=temp->next;
}
ptr->next=0;
free(temp);
}
}
void delete_pos()
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
ptr=temp;
temp=temp->next;
}
ptr->next=temp->next;
free(temp);
}
}


