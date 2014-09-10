#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    printf("Enter 2 number is ");
    scanf("%d %d",&a,&b);
    c = a-b;
    if(c<0) {
        c = -1*c;
        printf("|%d-%d| = %d",a,b,c);}
    else
        printf("|%d-%d| = %d",a,b,c);
    return 0;
}
