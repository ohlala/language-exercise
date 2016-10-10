#include<stdio.h>
#include<stdlib.h>
struct node
{
  int add;
  int next;
  int date;
  int order; 
 }list[50];
 
 int main()
 {
   int firstadd,n,k,x,i,j,a,ord=1;
   scanf("%d %d %d",&firstadd,&n,&k);
   x=k;
   for(i=0;i<n;i++)
     {scanf("%d %d %d",&list[i].add,&list[i].date,&list[i].next);
      } 
   for(i=0;i<n;i++)
     if(list[i].add==firstadd)
     {  list[i].order=ord;
      break;    
    }
  ord++;
  for(a=0;a<n;a++)
  for(j=0;j<n;j++)
  {  if(list[i].next==list[j].add)
    {  list[j].order=ord;
      
      i=j; ord++;
      
    }    
  }
  for(i=0;i<k;i++)
  {  for(j=0;j<n;j++)
      for(a=0;a<n;a++)
      {if (list[j].order==k&&list[a].order==(k-1))
          {
          printf("%05d %d %05d\n",list[j].add,list[j].date,list[a].add);
          k--;
          }
      }
  }
  
  for(i=0;i<n;i++)
    if(list[i].order==1)
      printf("%05d %d ",list[i].add,list[i].date);
  for(i=0;i<n;i++)
    if(list[i].order==x+1)
      printf("%05d\n",list[i].add);
  
  for(a=0;a<n;a++)
  {
      for(i=0;i<n;i++)
      if(list[i].order==x+1&&(x+1)<n)
      {
      printf("%05d %d %05d\n",list[i].add,list[i].date,list[i].next);
      }
      x++;
      if(x==n)
        break;
  }
   for(i=0;i<n;i++)
    if(list[i].order==n)
      printf("%05d %d %d",list[i].add,list[i].date,list[i].next);
 }
