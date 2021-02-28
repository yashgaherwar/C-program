#include <stdio.h>

int main()
{
    int a=4;
    int b;
    
    b=a;
    printf("line1, value of opperator '=': %d\n",b); //4
    b+=a;
    printf("line2, value of opperator '+=': %d\n",b); //8
    b-=a;
    printf("line3, value of opperator '-=': %d\n",b); //0
    b*=a;
    printf("line4, value of opperator '*=': %d\n",b); //16
    b%=a;
    printf("line6, value of opperator '%=': %d\n",b); //0
    
    return 0;
}
