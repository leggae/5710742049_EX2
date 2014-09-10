#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   int y;
   printf("Please enter coordinate x y : ");
   scanf("%d %d",&x,&y);
    if(x>0&&y>0)
        printf("(%d,%d) = Q1",x,y);
    else if(x<0,y>0)
        printf("(%d,%d) = Q2",x,y);
    else if(x<0,y<0)
        printf("(%d,%d) = Q3",x,y);
    else if(x>0,y<0)
        printf("(%d,%d) = Q4",x,y);
    else(x=0&&y=0)
        printf("(%d,%d)",x,y);

    return 0;
}
