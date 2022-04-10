#include <stdio.h>
main()
{
    int marks, i, n;
    float avg, total;
    printf("Enter number of subjects\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter subject %d marks\n", i);
        scanf("%d", &marks);
        total = total + marks;
    }
    avg = total / n;
    printf("Average of %d subjects is %f\n", n, avg);
}