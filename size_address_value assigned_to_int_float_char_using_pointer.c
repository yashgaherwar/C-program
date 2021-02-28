#include <stdio.h>

int main()
{
    int i=5;
    float f=9.5678;
    char c='b';
    
    int *iptr=&i;
    float *fptr=&f;
    char *cptr=&c;
    
    printf("value assigned in i:%d\n",i);
     printf("value assigned in f:%f\n",f);
      printf("value assigned in c:%c\n",c);
      
       printf("size of i:%d\n",sizeof(int));
       printf("size of f:%d\n",sizeof(float));
       printf("size of c:%d\n",sizeof(char));
       
       printf("address of iptr: %p\n",iptr);
       printf("address of fptr: %p\n",fptr);
        printf("address of cptr: %p\n",cptr);
        
        printf("value stored at %p:%d\n",iptr,*iptr);
        printf("value stored at %p:%f\n",fptr,*fptr);
        printf("value stored at %p:%c\n",cptr,*cptr);
       
        return 0;
}
