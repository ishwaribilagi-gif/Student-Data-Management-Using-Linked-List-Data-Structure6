#include"header.h"
int countnode(sll *ptr)
{
int c=0;
while(ptr)
{
ptr=ptr->next;
}
return c;
}
