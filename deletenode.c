#include"header.h"
void deletenode(sll **ptr)
{
	int r,n;
	char ch;
	if(*ptr==0)
	{
		printf("no records found\n");
		return ;
	}
	printf("enter your choice for delete 1]n,2]r\n");
	scanf(" %c",&ch); 
	//printf("%d",ch);
	if(ch=='n')
	{
		char name[20];
		printf("enter name to delete\n");
		scanf("%s",name);
		sll *prev,*del=*ptr;
		while(1){
			if(strcmp(del->name,name)==0)
			{
				if(del==*ptr)
					*ptr=del->next;
				else
					prev->next=del->next;
			rol[del->rollno-1]=0;
                  	free(del);
				return ;
			}
			prev=del;
			del=del->next;
		}
		printf("name not found\n");
	}
	else if(ch=='r')
		if(*ptr==0)

		{
			printf("no records found\n");
			return ;
		}
	int rollno;
	printf("enter roll no to delete\n");
	scanf("%d",&rollno);
	sll *prev,*del=*ptr;
	while(1){
		if(del->rollno==rollno)
		{
			if(del==*ptr)
				*ptr=del->next;
			else

				prev->next=del->next;
			rol[del->rollno-1]=0;
                        free(del);
			return ;
		}
		prev=del;
		del=del->next;
	}
	printf("rollno not found\n");
}
