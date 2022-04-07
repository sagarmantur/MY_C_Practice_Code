#include <stdio.h>
main()
{
    int n, fib1 = 0, fib2 = 1, fib3, i = 2;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("First %d fibonacci numbers are\n", n);
    printf("%d\t%d\t", fib1, fib2);
    while (i < n)
    {
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
        printf("%d\t", fib3);
        i++;
    }
}