#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
    int data;
    struct node *link;
  };
struct node *start=NULL;
struct node *ptr,*newnode;
void insert();
void traverse();
void count();
void search();
void main()
 {
  while(1)
   {
    int op;
    printf("\n enter the option \t 1.insert: \t 2.traverse: \t 3.count: \t 4.search: \t 5.exit \n");
    scanf("%d",&op);
    switch(op)
    {
     case 1:insert();
     break;
     case 2:traverse();
     break;
     case 3:count();
     break;
     case 4:search();
     break;
     case 5:exit(0);
     break; 
    }
   }
 }
void insert()
{
struct node*temp;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->link=0;
if(start==0)
{
start=temp=newnode;
}
else
{
newnode->link=start;
start=newnode;
}
} 
  void traverse()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp=start;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->link;

}
}
void count()
 {
   struct node *temp;
   temp=start;
   int c=0;
   if(temp==NULL)
    {
     printf("count=0");
    }
   else
    {
     while(temp!=NULL)
     {
     c++;
     temp=temp->link;
    }
   }
    printf("count=%d",c);  
 } 
void search()
{
 struct node*temp;
	int pos=0,key,num=0;
	printf("enter the number to be searched");
	scanf("%d",&key);
	temp=start;
	while(temp->link!=NULL)
	{ 
	 pos++;
	  if(temp->data==key)
	   {
	    printf("%d is element fount at %d position \n",key,pos);
	    num=1;
	    break;
	}
	 temp=temp->link;
	 }
	if(num==0)
	 {
	  printf("data not found in list");
	 }
	 } 
	










 
