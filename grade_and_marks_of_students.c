#include <stdio.h>

int main()
{
    int a;
    printf("enter a %d",a);
    scanf("%d",&a);
     if(a>90)
     {
         printf("%d grade is A+",a);
     }
     else if(a>80)
     {
       printf("%d grade is A",a);  
     }
      else if(a>70)
     {
       printf("%d grade is B+",a);  
     }
      else if(a>60)
     {
       printf("%d grade is B",a);  
     }
      else if(a>50)
     {
       printf("%d grade is C+",a);  
     }
      else if(a>=40)
     {
       printf("%d grade is C",a);  
     }
     else
     {
         printf("%d FAIL",a);
     }
     
     
     
     
    return 0;
}


