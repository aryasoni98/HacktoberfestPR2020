#include <stdio.h>
#include <stdlib.h>

factorial(int num)
{
    if(num == 0 || num == 1)
    {
        return 1;
    }
    else return num*factorial(num-1);
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int r;
    printf("Enter r: ");
    scanf("%d",&r);
    printf("%dC%d is %d",n,r,factorial(n)/(factorial(r)*factorial(n-r)));
    return 0;
}
