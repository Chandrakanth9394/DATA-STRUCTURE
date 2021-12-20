#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front=-1,back=-1;
void insert();
void delete();
void peek();
void display();
void main()
 {
  int op;
  while(1)
   { 
    printf("\n enter the option: \n 1.insert \t 2.delete \t 3.peek \t 4.DISPLAY\t 5.exit \t ");
   scanf("%d",&op);
   switch(op)
      {
        case 1:insert(); 
        break;
        case 2: delete();
        break;
        case 3: peek();
        break;
        case 4: display(); 
        break;
        case 5: exit(0); 
      }
   }
  
 }
void insert()
 {
  int item;
   printf("enter the element to be inserted: \n");
   scanf("%d",&item);
   if(back==N-1)
     {
      printf("overflow");
     }
    else if((front==-1)&&(back==-1))
      {
      front=back=0;
      queue[back]=item; 
      }
     else 
      {
       back++;
       queue[back]=item;
      }
  }
  void delete()
   {
   int val;
    if((front==-1)||(front>back))
    {
     printf("underflow ");
    }
   else
    {
     val=queue[front];
     front++;
     printf("element deleted is %d",val);
    }
   }
   void peek()
   {
    if((front==-1)||(front>back))
     {
      printf("the queue is empty ");
     }
    else
    {
     printf(" the element in the front is %d",queue[front]);
    }
   }
    void display()
     {
      int i;
      if((front==-1)||(front>back))
       {
        printf("the queue is empty");
       }
      else
       {
         for(i=front;i<=back;i++)
          {
           printf("%d\t",queue[i]);
          }
       }
      }
         
          
              
        
      
      
  

 
