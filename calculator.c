#include <stdio.h>

int main(void)
{

    int  num1, num2, result;
    char operation;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Choose operation (+, -, *, /): ");
    scanf(" %c", &operation);   // space before %c skips leftover newline/whitespace

    if (operation == '+')
    {
        result = num1 + num2;
        printf("Result: %d\n", result);
    }
    else if (operation == '-')
    {
        result = num1 - num2;
        printf("Result: %d\n", result);
    }
    else if (operation == '*')
    {
        result = num1 * num2;
        printf("Result: %d\n", result);
    }
    else if (operation == '/')
    {
        if (num2 == 0)
        {
            printf("Error: Cannot divide by zero.\n");
        }
        else
        {
            result = num1 / num2;
            printf("Result: %d\n", result);
        }
    }
    else
    {
        printf("Invalid operation.\n");
    }

    return 0;
}