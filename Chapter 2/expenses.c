#include <stdio.h>
int main()
{
    int qty , dis ;
    float rate , tot ;
    printf("Enter Quantity ");
    scanf("%d" , &qty);
    printf("Enter Rate ");
    scanf("%f" , &rate);
    if (qty>1000)
        dis=10;
    else
        dis=2;
    tot=( qty*rate)-(qty*rate*dis/100);
    printf("Total amount is %f" , tot);
    return 0;
}
