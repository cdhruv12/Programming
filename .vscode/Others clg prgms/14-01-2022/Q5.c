#include <stdio.h>
float add(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float divi(float num1, float num2);
int main()
{
        char ch;
        float num1, num2, result = 0.0f;
        printf("Enter [number 1] [+ - * /] [number 2]\n");
        scanf("%f %c %f", &num1, &ch, &num2);

        switch (ch)
        {
        case '+':
                result = add(num1, num2);
                break;

        case '-':
                result = sub(num1, num2);
                break;

        case '*':
                result = mult(num1, num2);
                break;

        case '/':
                result = divi(num1, num2);
                break;

        default:
                printf("Invalid operator");
        }
        printf("%.2f %c %.2f = %.2f", num1, ch, num2, result);
        return 0;
}
float add(float num1, float num2)
{
        return num1 + num2;
}
float sub(float num1, float num2)
{
        return num1 - num2;
}
float mult(float num1, float num2)
{
        return num1 * num2;
}
float divi(float num1, float num2)
{
        return num1 / num2;
}