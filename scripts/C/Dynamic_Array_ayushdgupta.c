#include<stdio.h>
#include<conio.h>
#include<malloc.h>
main()					//	dynamic array
{
	int i;
	int *a=(int *)malloc(sizeof(int)*25);
	//clrscr();
	for(i=0;i<25;i++)
	{
		a[i]=i;
	}
	for(i=0;i<25;i++)
	{
		printf("%d ",a[i]);
	}
}