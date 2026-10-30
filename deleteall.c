#include"header.h"
void deleteall(sll **ptr)
{
	size=0;
       if(*ptr==0)
	{
		printf("no record are present\n");
		return;
	}
	sll *del=*ptr;
	int p=1;
	while(del)
	{
		*ptr=del->next;
		free(del);
		del=*ptr;
	}
	printf("all nodes are deleted\n");
}

