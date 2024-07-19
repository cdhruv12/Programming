#include<stdio.h>

int main()
{
    int i=2,n,p;

    printf("Enter no. = ");
    scanf("%d",&n);

    do
    {
        
        if (n%i==0)
        {
            p=0;
            break;
        }
        i++;
        
    } while (i<n);

    if (p==0 && n!=2)
    {
        printf("\n%d is not a prime no.",n);
    }

    else
    {
        printf("\n%d is a prime no.",n);
    }
    
    
    return 0;
}