#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    printf("Enter number is ");
    scanf("%d",&x);
    if(x % 2 == 0)
    printf(" %d is even ",x);
    else
    printf(" %d is odd ",x);

    return 0;
}
