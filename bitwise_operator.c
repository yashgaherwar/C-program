#include <stdio.h>

int main()
{
    int a=4,b=2,c;
    
    c=a&b;
    printf("line1 %d\n",c); //0
    c=a|b;
    printf("line2 %d\n",c); //6
    c=a^b;
    printf("line3 %d\n",c); //6
    c=a<<2;
    printf("line4 %d\n",c); //16
    c=a>>2;
    printf("line5 %d\n",c); //1
    
    return 0;

}
