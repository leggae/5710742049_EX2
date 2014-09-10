#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   printf("Enter 1 nuumber is ");
   scanf("%d",&a);
   if(a>40&&a<=100)
        printf("40<%d<=100",a);
   else
        printf("%d is false",a);

    return 0;
}
