#include<stdio.h>
int main()
{
int a[30],n,i,j,f=0;
printf("enter the width of array");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
    {
    if(a[i]>a[j])
	{
	f=a[j];
	a[j]=a[i];
	a[i]=f;	
    }	
	}	
}
for(i=0;i<n;i++)
printf("%d\n",a[i]);

}
