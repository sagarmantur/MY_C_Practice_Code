int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter Three Value");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("The Largest Number is %d \n", a);
        }
        else
        {
            printf("The Largest Number is %d \n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("The Larges Number is %d \n", b);
        }
        else
        {
            printf("The Largest Number is %d \n", c);
        }
    }
    return 0;
}
