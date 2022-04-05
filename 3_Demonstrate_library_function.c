#include <stdio.h>
#include <math.h>
main(void)
{
    double dNumber = 64.54;
    double dFloorValue, dCeilValue, sqr;
    dFloorValue = floor(dNumber);
    dCeilValue = ceil(dNumber);
    sqr = sqrt(dNumber);
    printf("Original number is: %5.2lf\n", dNumber);
    printf("Suareroot of number is:%5.2lf\n", sqr);
    printf("Number rounded down %5.2lf\n", dFloorValue);
    printf("Number rounded up   %5.2lf\n", dCeilValue);
}