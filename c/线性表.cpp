#include <stdio.h>
#include <stdlib.h> 


int main() 
{
	typedef struct {
	int Date;
	struct Node *Last;
	struct Node *Next;
	}List;
	List L,*PrtL;
	
	int N,K,i,j,k;
	List *s;
	
	scanf("%d",&PrtL);
	scanf("%d",&N);
	scanf("%d",&K);
	for(i=0;i<N;i++)
	{	
		s = (List *)malloc(sizeof(List));
		scanf("%d",&j);
		*(s->Last)=j;
		scanf("%d",&j);
		s->Date=j;
		scanf("%d",&j);
		*(s->Next)=j;
	}	

	for(i=0;i<K;i++)
	{	
		PrtL=PrtL->Next;
	}	
	printf("%d %d %d",PrtL->Last,PrtL->Date,PrtL->Next);
/*	for(i=0;i<k;i++)
	{	
		s = (List *)malloc(sizeof(List));
		scanf("%d",&j);
		*(s->Last)=j;
		scanf("%d",&j);
		s->Date=j;
		scanf("%d",&j);
		*(s->Next)=j;
	}	*/
	
	return 0;
	
}

