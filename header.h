#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student 
{
	int rollno;
	char name[20];
	float marks;
	struct student *next;
}sll;
void addnew(sll **);
void deletenode(sll **);
void printnode(sll *);
void savefile(sll *);
void deleteall(sll **);
void reverselist(sll **);
int countnode(sll *);
void sortdata(sll *);
int roll(int **a,int *s);
void modify(sll **ptr);
extern int*rol;
extern int  size;
//void addnew(sll **);
