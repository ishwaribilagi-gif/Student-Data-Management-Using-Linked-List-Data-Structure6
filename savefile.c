#include"header.h"
void savefile(sll *ptr)
{
	if(ptr==0)
	{
		printf("no records are present\n");
		return;
	}
	FILE *fp;
	fp=fopen( "std.data","w");
	while(ptr)
	{
		fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
	printf("data save in file\n");
}
