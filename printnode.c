#include"header.h"
void printnode(sll *ptr)
{
	if(ptr==0)
	{
		printf("no records are present\n");
		return;
	}
	while(ptr){
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}
