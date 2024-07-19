#include<stdio.h>

int main()
{
    int i=0,n,f=1;

    printf("Enter no. = ");
    scanf("%d",&n);

    while (i<n)
    {
        i++;
        f=f*i;
    }
     
     printf("\nFactorial of %d = %d ",n,f);

    
    return 0;
}