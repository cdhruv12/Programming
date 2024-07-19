#include<stdio.h>

int main()
{
    int i=0,s=0,n;

    printf("Enter integer = ");
    scanf("%d",&n);

    while (i<10)
    {
        
        printf("\n %d X %d = %d \n",n,i,n*++i);
        s=s+(n*i);
    }

    printf("Sum of the multiplication table = %d",s);
    
    return 0;
}