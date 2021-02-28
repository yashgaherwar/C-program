#include <stdio.h>

int main() 
{
 int arr[3]={1,2,3};
 int *p;
 p=arr;
 printf("%d\n",*p);
 ++p;// use of pointer arithmetic 
  printf("%d\n",*p);
  ++p;// use of pointer arithmetic
   printf("%d",*p);
 
    return 0;
}
