#include <stdio.h>

struct book
{
    int bookNo;
    char title[100];
    float price;
};

void display(struct book *b, int n)
{
    struct book maxBook;
    float maxPrice = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i].price > maxPrice)
            maxBook = b[i];
    }

    printf("\n\nBook Number: %d\nTitle: %sPrice:%f", maxBook.bookNo, maxBook.title, maxBook.price);
}

int main()
{

    int n;
    printf("Enter the total number of books to be stored: ");
    scanf("%d", &n);
    struct book b[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter book number: ");
        scanf("%d", &b[i].bookNo);
        printf("\nEnter book title: ");
        getchar();
        fgets(b[i].title, 100, stdin);
        printf("\nEnter book price: ");
        scanf("%f", &b[i].price);
    }

    display(b, n);

    return 0;
}