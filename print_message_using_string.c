#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    char greeting[6]={'h','e','l','l','o'};
    
    printf("enter greeting :%s\n",greeting);
    printf("%c\n",greeting[1]);
    
    printf("enter greeting message 1:\n");
    scanf("%[^\n]s",greeting);
    printf("greeting message:%s\n",greeting);
    
    fflush(stdin);
    
    printf("enter greeting message 2:\n");
    scanf("%[^\n]s",greeting);
    printf("greeting message:%s\n",greeting);
    
    
    
    return 0;
}

