#include <stdio.h>

typedef struct date
{
    int date, month, year;
} date;

void display(date d)
{
    printf("The Date is %d/%d/%d\n", d.date, d.month, d.year);
}

int dateCmp(date d1, date d2)
{
    // Make decision on the basis of year comparison
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }

    // Make decision on the basis of month comparison
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }

    // Make decision on the basis of date comparison
    if (d1.date > d2.date)
    {
        return 1;
    }

    if (d1.date > d2.date)
    {
        return -1;
    }

    return 0;
}
int main()
{
    date d1 = {22, 11, 21};
    date d2 = {23, 12, 22};

    display(d1);
    display(d2);

    int a = dateCmp(d1, d2);

    printf("Date Comparison function returns %d\n", a);

    return 0;
}