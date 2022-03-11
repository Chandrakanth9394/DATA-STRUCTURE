#include<stdio.h>
#include<stdbool.h>
#define infinity 100
int graph[20][20];
int v;
/* 0 4 6 5 0
   4 0 0 0 10
   6 0 0 0 9
   5 0 0 0 8
   0 10 9 8 0 */
void mst(bool span[])
{
    int edge=0,total=0,m,n;
    span[0]=1;
 
  printf("\nEGDE : WEIGHT\n");
   while(edge<v-1)
   {
    int cost=infinity;
    for(int i=0;i<v;i++)
      {
      if(span[i])
        {
        for(int j=0;j<v;j++)
          {
          if(!span[j] && graph[i][j])
            {
           if(graph[i][j] < cost)
             {
             cost=graph[i][j];
             m=i;
             n=j;
             }
            }
          }
        }
      }
  printf("%d - %d : %d\n", m, n, graph[m][n]);
  total+=graph[m][n];
    span[n]=1;
    edge++;
  }
  printf("\nTotal Cost=%d\n",total);
}

void main()
  {
 printf("\nEnter the number of vertices ");
 scanf("%d",&v);
 printf("\nEnter the Adjacency Matrix \n");
 for(int i=0;i<v;i++)
    {
    for(int j=0;j<v;j++)
      {
      scanf("%d",&graph[i][j]);
      }
    }

 for(int i=0;i<v;i++)
   {
   graph[i][i]=0;
   }

 bool span[v];
 for(int i=0;i<v;i++)
   {
   span[i]=0;
   }

 mst(span);

}
