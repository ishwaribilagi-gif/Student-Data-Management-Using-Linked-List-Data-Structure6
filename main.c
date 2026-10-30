#include"header.h"


int *rol=0;
int size=0;
//extern int*rol;
//extern int  size;
int roll(int **ro,int *size)
{

  //printf("hassaaa\n"); 
int count=0;
//printf("\nuu\n");
if(*ro==0)
  {
 // printf("hai\n"); 
  *ro=malloc(sizeof(int));
    **ro=1;
    *size=1;
    count++;
    return 1;
  }
 //printf("hai1 111\n"); 

int *r=*ro;
 while(*r)
  {
  count++;
   r++;
  if(*size<count)
   break;
   }
if(*size<=count)
{//printf("fir");
 *ro=realloc(*ro,sizeof(int)*(*size+1));
 //printf("so %d so",*size);
  *size=*size+1;
  *(*ro+*size-1)=*size;
 //printf("so %d so",*size);
  return *size;
 //printf("so %d so",*size);
}
else
*r=++count;
//printf("sec");
return count;
}
 
 
  



int main()
{
	sll *headptr=0;
	char op,c;
	while(1)
	{
               printf("----------STUDENT RECORD MENU-------------\n");
                printf("\t a/A:addnew\n\t d/D:deletenode\n\t p/P:printnode\n\t m/M:modify\n\t s/S:savefile\n\t e/E:exit\n\t t/T:sortdata\n\t l/L:deleteall\n\t r/R:reversrlist\n");
		printf("enter your choice\n");
		scanf(" %c",&op);
		switch(op)
		{
			case 'a': addnew(&headptr);break;
			case 'A': addnew(&headptr);break;
                        
                        case 'C':
                        case 'c': countnode(headptr);break;

                        case 'm':
                        case 'M': modify(&headptr);break;

		        case 'd': deletenode(&headptr);break;
		        case 'D': deletenode(&headptr);break;

		        case 's': savefile(headptr);break;
		        case 'S': savefile(headptr);break;

		        case 'l': deleteall(&headptr);break;
		        case 'L': deleteall(&headptr);break;

		        case 'r': reverselist(&headptr);break;
		        case 'R': reverselist(&headptr);break;

                        case 't': sortdata(headptr);break;
                        case 'T': sortdata(headptr);break;

		        case 'p': printnode(headptr);break;
		        case 'P': printnode(headptr);break;

                 	case 'e': exit(0);break;
                 	case 'E': exit(0);break;
			default:  printf("\033[31;1;4;5m unknown option\033[0m\n");
		}
	}
}

