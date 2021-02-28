#include <stdio.h>
#include <math.h>

int main()
{
    int x,y,c,p,r,d,t;
    c=(0,0);
    
    printf("value of radius",r);
    scanf("value of radius %d",&r);
    
    printf("%d\n",c);
    printf("%d\n%d\n",&x,&y);
    scanf("%d%d",&x,&y);
    
    d=pow((x-0),2)+pow((y-0),2);
    t=sqrt(d);
    printf("%d\n%d\n",d,t);
    
    if(d>r)
    {
        printf("point lies outside the circle %d");
    }
    else
    {
        printf("point lies inside %d");
    }
    
    
    
    

    return 0;
}
