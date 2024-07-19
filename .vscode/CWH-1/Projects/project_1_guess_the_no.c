#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, g, s = 1;
    srand(time(0));
    n = rand() % 100 + 1;

    do
    {
        printf("Guess the no. b/n z1 and 100\n");
        scanf("%d", &g);

        if (g > n)
        {
            printf("Pls guess a lower no. \n");
        }

        else if (g < n)
        {
            printf("Pls guess a higher no. \n");
        }

        else
        {
            printf("You guessed it right in %d attempts :)\n", s);
        }

        s++;

    } while (g != n);

    return 0;
}