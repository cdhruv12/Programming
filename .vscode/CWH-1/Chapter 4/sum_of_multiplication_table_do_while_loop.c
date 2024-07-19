#include<stdio.h>

int main()
{
    int i=0,s=0,n;

    printf("Enter integer = ");
    scanf("%d",&n);
    do
    {
        printf("\n %d X %d = %d \n",n,i,n*++i);
        s=s+(n*i);
    } while (i<10);

    printf("The sum of multiplication table = %d ",s);
    
    return 0;
}