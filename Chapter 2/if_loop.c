#include <stdio.h>
int main()
{
    int num ;
    printf("Enter a number less than 10 ");
    scanf("%d" , &num);

    if(num<=10)
        printf("What an Obedient guy you are !");    
    else 
        printf("What a disobedient guy you are !"); 
}