#include"header.h"
void reverselist(sll **ptr)
{
	if(*ptr==0)
	{
		printf("no record are present\n");
		return;
	}
	int c=countnode(*ptr);
	int i=0;
	sll *t=*ptr;
	sll **a=malloc(sizeof(sll*)*c);
	if(c>1){
		while(t){
			a[i++]=t;
			t=t->next;}
		for(i=c-1;i>0;i--)
			a[i]->next=a[i-1];
		a[0]->next=0;
		*ptr=a[c-1];
	}
}
