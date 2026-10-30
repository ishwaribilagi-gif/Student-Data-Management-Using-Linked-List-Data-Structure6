#include"header.h"

void modify(sll **ptr)
{
	if(*ptr==0)
	{
		printf("no student record found...\n");
		return;
	}
        printf("Enter which record to search for modification\nR/r : to search a rollno\nN/n : to search a name\np/p : percentage based\n");
        char ch;
        sll *search=*ptr;
        scanf(" %c",&ch);
        if((ch=='R')||(ch=='r'))
        {
                printf("enter the roll number : ");
                int rn;
                scanf("%d",&rn);
                if(((*ptr)->rollno)==rn)
                {
                     char op;
                     l:
                     printf("press :\nn ->modify name\nm ->modify marks\n");
                     scanf(" %c",&op);
                     if(op=='n')
                       {
                         printf("\nEnter the modified name : ");
                         scanf("%s",(*ptr)->name);
                         return;
                        }
                      else if(op=='m')
                         {
                           printf("\nEnter the modified marks : ");
                           scanf("%f",&((*ptr)->marks));
                           return;
                          }
                      else 
                          goto l;
                }
                while(search)
                {
                        if((search->rollno)==rn)
                        {
                          char op;
                          l1:
                          printf("press :\nn ->modify name\nm ->modify marks\n");
                          scanf(" %c",&op);
                          if(op=='n')
                              {
                               printf("\nEnter the modified name : ");
                               scanf("%s",search->name);
                               return;
                               }
                          else if(op=='m')
                              {
                               printf("\nEnter the modified marks : ");
                               scanf("%f",&(search->marks));
                               return;
                              }
                           else 
                              goto l1;
                         }
			search=search->next;
                }
                printf("\nNo such roll number found...\n");
                return;
        }
	 else if((ch=='N')||(ch=='n'))
        {
                printf("enter the name : ");
                char name[20];
                int count=0;
                scanf("%s",name);
                while(search)
                {
                        if(strcmp((search->name),name)==0)
                                count++;
			search=search->next;
                }
		search=*ptr;
                if(count==0)
                {
                        printf("no such name found\n");
                        return;
                }
                if(count==1)
                {
                        if(strcmp(((*ptr)->name),name)==0)
                        {
                          char op;
                          l2:
                          printf("press :\nn ->modify name\nm ->modify marks\n");
                          scanf(" %c",&op);
                          if(op=='n')
                              {
                               printf("\nEnter the modified name : ");
                               scanf("%s",(*ptr)->name);
                               return;
                               }
                          else if(op=='m')
                              {
                               printf("\nEnter the modified marks : ");
                               scanf("%f",&((*ptr)->marks));
                               return;
                              }
                           else 
                              goto l2;
                               // printf("\nEnter the modified name : ");
                               // scanf("%s",(*ptr)->name);
                               // printf("\nEnter the modified marks : ");
                                //scanf("%f",&((*ptr)->marks));
                               // return;
                           }
                        while(search)
                        {
                               if(strcmp((search->name),name)==0)
                               {

                          char op;
                          l3:
                          printf("press :\nn ->modify name\nm ->modify marks\n");
                          scanf(" %c",&op);
                          if(op=='n')
                              {
                               printf("\nEnter the modified name : ");
                               scanf("%s",search->name);
                               return;
                               }
                          else if(op=='m')
                              {
                               printf("\nEnter the modified marks : ");
                               scanf("%f",&(search->marks));
                               return;
                              }
                           else 
                              goto l3;
                            }

                                      // printf("\nEnter the modified name : ");
                                      // scanf("%s",search->name);
                                       //printf("\nEnter the modified marks : ");
                                       //scanf("%f",&(search->marks));
                                       //return;
                               
			       search=search->next;
                        }
                }

		  if(count>1)
                {
                        printf("\n%d records available with same name...\n",count);
                        printf("Enter the roll number to modify : ");
                        int rn;
                        scanf("%d",&rn);
                        if((((*ptr)->rollno)==rn)&&(strcmp(((*ptr)->name),name)==0))
                        {

                          char op;
                          l4:
                          printf("press :\nn ->modify name\nm ->modify marks\n");
                          scanf(" %c",&op);
                          if(op=='n')
                              {
                               printf("\nEnter the modified name : ");
                               scanf("%s",(*ptr)->name);
                               return;
                               }
                          else if(op=='m')
                              {
                               printf("\nEnter the modified marks : ");
                               scanf("%f",&((*ptr)->marks));
                               return;
                              }
                           else 
                              goto l4;
                               // printf("\nEnter the modified name : ");
                       //     printf("\nEnter the modified name : ");
                        //    scanf("%s",(*ptr)->name);
                          //  printf("\nEnter the modified marks : ");
                           // scanf("%f",&((*ptr)->marks));
                           // return;
                        }
                        while(search)
                        {
                            if(((search->rollno)==rn)&&(strcmp((search->name),name)==0))
                            {

                          char op;
                          l5:
                          printf("press :\nn ->modify name\nm ->modify marks\n");
                          scanf(" %c",&op);
                          if(op=='n')
                              {
                               printf("\nEnter the modified name : ");
                               scanf("%s",search->name);
                               return;
                               }
                          else if(op=='m')
                              {
                               printf("\nEnter the modified marks : ");
                               scanf("%f",&(search->marks));
                               return;
                              }
                           else 
                              goto l5;
                            }
                               // printf("\nEnter the modified name : ");
                              //  scanf("%s",search->name);
                              //  printf("\nEnter the modified marks : ");
                              //  scanf("%f",&(search->marks));
                              //  return;
                            
			    search=search->next;
                         }
                printf("\nNo such roll number found associate with the given name...\n");
                return;
                }

        }
        else if((ch=='p')||(ch=='P'))
        {
                printf("enter the marks : ");
                float marks;
                int count=0;
                scanf("%f",&marks);
                while(search)
		{
                        if((search->marks)==marks)
                                count++;
			search=search->next;
                }
		search=*ptr;
                if(count==0)
                {
                        printf("no such mark found\n");
                        return;
                }
                if(count==1)
                {
                        if(((*ptr)->marks)==marks)
                        {

                          char op;
                          l9:
                          printf("press :\nn ->modify name\nm ->modify marks\n");
                          scanf(" %c",&op);
                          if(op=='n')
                              {
                               printf("\nEnter the modified name : ");
                               scanf("%s",(*ptr)->name);
                               return;
                               }
                          else if(op=='m')
                              {
                               printf("\nEnter the modified marks : ");
                               scanf("%f",&((*ptr)->marks));
                               return;
                              }
                           else 
                              goto l9;
                               // printf("\nEnter the modified name : ");
                               // printf("\nEnter the modified name : ");
                               // scanf("%s",(*ptr)->name);
                              //  printf("\nEnter the modified marks : ");
                               // scanf("%f",&((*ptr)->marks));
                               // return;
                        }
                        while(search)
                        {
                               if((search->marks)==marks)
                               {

                          char op;
                          l6:
                          printf("press :\nn ->modify name\nm ->modify marks\n");
                          scanf(" %c",&op);
                          if(op=='n')
                              {
                               printf("\nEnter the modified name : ");
                               scanf("%s",search->name);
                               return;
                               }
                          else if(op=='m')
                              {
                               printf("\nEnter the modified marks : ");
                               scanf("%f",&(search->marks));
                               return;
                              }
                           else 
                              goto l6;
                            
                                       
                                      // printf("\nEnter the modified name : ");
                                      // scanf("%s",search->name);
                                      // printf("\nEnter the modified marks : ");
                                      // scanf("%f",&(search->marks));
                                       //return;
                               }
			       search=search->next;
                        }
                }
                if(count>1)
                        {
                        printf("\n%d records available with same name...\n",count);
                        printf("Enter the roll number to modify : ");
                        int rn;
                        scanf("%d",&rn);
			 if((((*ptr)->rollno)==rn)&&(((*ptr)->marks)==marks))
                        {

                          char op;
                          l11:
                          printf("press :\nn ->modify name\nm ->modify marks\n");
                          scanf(" %c",&op);
                          if(op=='n')
                              {
                               printf("\nEnter the modified name : ");
                               scanf("%s",(*ptr)->name);
                               return;
                               }
                          else if(op=='m')
                              {
                               printf("\nEnter the modified marks : ");
                               scanf("%f",&((*ptr)->marks));
                               return;
                              }
                           else 
                              goto l11;
                               // printf("\nEnter the modified name : ");
                          //  printf("\nEnter the modified name : ");
                           // scanf("%s",(*ptr)->name);
                            //printf("\nEnter the modified marks : ");
                            //scanf("%f",&((*ptr)->marks));
                            //return;
                        }
                        while(search)
                        {
                            if(((search->rollno)==rn)&&((search->marks)==marks))
                            {

                          char op;
                          l7:
                          printf("press :\nn ->modify name\nm ->modify marks\n");
                          scanf(" %c",&op);
                          if(op=='n')
                              {
                               printf("\nEnter the modified name : ");
                               scanf("%s",search->name);
                               return;
                               }
                          else if(op=='m')
                              {
                               printf("\nEnter the modified marks : ");
                               scanf("%f",&(search->marks));
                               return;
                              }
                           else 
                              goto l7;
                            
                               // printf("\nEnter the modified name : ");
                               // scanf("%s",search->name);
                               // printf("\nEnter the modified marks : ");
                               // scanf("%f",&search->marks);
                               // return;
                            }
			    search=search->next;
                         }
                         printf("\nNo such roll number found with the given percentage...\n");
                         return;
                         }
        }
        else
        {



                printf("invalid option...\n");
                return;
        }
}


