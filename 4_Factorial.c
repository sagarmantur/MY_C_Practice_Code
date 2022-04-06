#include <stdio.h>
int main()
{
    int i, n, factorial;
    printf("Enter the number:");
    scanf("%d", &n);
    factorial = 1;
    for (i = 1; i <= n; i++)
        factorial = factorial * i;

    printf("Factorial of %d is %d\n", n, factorial);
    return 0;
}
