#include <stdio.h>

int main()
{
    int a;
    printf("enter year\t");
    scanf("%d",&a);

    a%4==0?printf("leap year"):printf("not a leap year");
    return 0;
}
