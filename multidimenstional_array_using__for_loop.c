#include <stdio.h>

int main() 
{
    int i,j;
    int arr1[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int arr2[3][4]={
                    {1,2,3,4},
                    {5,6,7,8},
                   {9,10,11,12}
        
                   };
                   
                   
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
      printf("\n");    
    }
    return 0;
}
