/*Programto read radius of a circle 
and to find area and circumference*/
#include <stdio.h>
#define PI 3.14
main()
{
    float r, area, circumference;
    printf("Enter the radius of the circle \n");
    scanf("%f", &r);
    area = PI * r * r;
    circumference = 2 * PI * r;
    printf("Area of circle=%f\n", area);
    printf("Circumference of circle=%f\n", circumference);
}
