#include <stdio.h>

int main()
{
    int p, n;
    float r, si, fa;

    printf("Enter principal amount: ");
    scanf("%d", &p);

    printf("Enter number of years: ");
    scanf("%d", &n);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    si = (p * n * r) / 100;
    fa = p + si;

    printf("Simple interest is %.2f\n", si);
    printf("Final amount is %.2f\n", fa);

    return 0;
}