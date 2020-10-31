#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
  int data;
  struct node *next;
}*start;
void create();
void print();
main()
{
  int choice;
  clrscr();
  start=NULL;
  while(1)
  {
    printf("\n1->create");
    printf("\n2->print");
    printf("\n3->exit");
    printf("\nenter your choice ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
	     create();
	     break;
      case 2:
	     print();
	     break;
      case 3:
	     exit();
    }
  }
}
void create()
{
  struct node *temp,*t;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("\nenter the data ");
  scanf("%d",&temp->data);
  temp->next=NULL;         /* a complete node is created in this line */
  if(start==NULL)
  {
    start=temp;         /* if it is a first node */
  }
  else
  {                     /* if list is already created */
    t=start;
    while(t->next!=NULL)
    {
      t=t->next;       /* doe to loop we came to the end of the list */
    }
    t->next=temp;
  }
}
void print()
{
  struct node *temp;
  temp=start;
  while(temp!=NULL)
  {
    printf("%d\n",temp->data);
    temp=temp->next;
  }
}