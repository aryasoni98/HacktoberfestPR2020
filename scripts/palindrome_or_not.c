#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0,r,m;
    m=n;
    while(n!=0){
        r=n%10;
        n/=10;
        sum=(sum*10)+r;
    }
    if (sum==m){
        printf("%d is a palindrome",m);
    }
    else{
        printf("%d is not a palindrome",m);
    }
}
