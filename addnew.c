#include"header.h"
void addnew(sll **ptr)
{
	sll*n=malloc(sizeof(sll));
	printf("enter name and marks\n");
        n->rollno=roll(&rol,&size);
	scanf(" %s %f",n->name,&n->marks);
	n->next=*ptr;
	*ptr=n;
}
