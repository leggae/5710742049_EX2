#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter first integer\n");
    scanf("%d",&a);
    printf("Enter second integer\n");
    scanf("%d",&b);
    printf("Enter third integer\n");
    scanf("%d",&c);
    if(a>b && b>c)
        printf("%d > %d > %d",a,b,c);
    else if(a>c && c>b)
        printf("%d > %d > %d",a,c,b);
    else if(b>a && a>c)
        printf("%d > %d > %d",b,a,c);
    else if(b>c && c>a)
        printf("%d > %d > %d",b,c,a);
    else if(c>a && a>b)
        printf("%d > %d > %d",c,a,b);
    else
        printf("%d > %d > %d",c,b,a);
    return 0;
}
