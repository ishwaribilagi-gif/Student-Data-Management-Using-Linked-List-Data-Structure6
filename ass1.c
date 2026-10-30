#include<stdio.h>
void main()
{
	int choice,qty,amount,rs;
	printf("MENU CARD\n");
	printf("1.coffee---15rs\n 2.tea---10rs\n 3.cold coffee---25rs\n 4.milk shake---50rs\n");
	printf("enter your choice\n");
	scanf("%d",&choice);

	if(choice==1)
	{
		printf("you have selected coffee\n");
	         rs=15;
	}
	 else if(choice==2)
	 {
		printf("you have selected tea\n");
	         rs=10;
	 }
	 else if(choice==3)
	 {
		printf("you have selected cold coffee\n");
	         rs=25;
	 }
	else if(choice==4)
	{
		printf("you have selected milk shake\n");
	         rs=50;
	}
	else
	    printf("invalid choice\n");
            printf("enter the Quantity\n");
	    scanf("%d",&qty);
	    printf("Total amount: %d\n",qty*rs);
}
	

