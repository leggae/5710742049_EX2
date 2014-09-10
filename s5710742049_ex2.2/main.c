#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter number is ");
    scanf("%d",&x);
    if(x % 2 == 0 && x % 3 == 0)
        printf("%d is divisible by 2 and 3 \n",x);
    else if(x % 3 == 0)
        printf("%d is divisible by 3 \n",x);
    else if(x % 2 == 0)
        printf("%d is divisible by 2 \n",x);
    else
        printf("%d is not divisible by 2 and 3",x);
    return 0;
}


