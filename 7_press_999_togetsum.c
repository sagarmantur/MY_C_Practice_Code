#include <stdio.h>
main()
{
    int num, sum = 0;
    printf("Enter any integer value \n");
    do
    {
        scanf("%d", &num);
        if (num > 0 && num != 999)
        {
            sum = sum + num;
        }
    } while (num != 999);
    printf("Sum of positive integers is %d\n", sum);
}
