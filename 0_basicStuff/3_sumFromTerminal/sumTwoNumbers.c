#include<stdio.h>

int main()
{
    int firstNumber;
    int secondNumber;
    printf("let me sum 2 numbers!!! \n");
    printf("gimme the first number \n");
    scanf("%d", &firstNumber);
    printf("gimme the second number \n");
    scanf("%d", &secondNumber);

    printf("result: \n");
    printf("%d \n", firstNumber + secondNumber);

    return 0;
}