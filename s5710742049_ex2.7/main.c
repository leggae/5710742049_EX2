#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   printf("Enter your score is ");
   scanf("%d",&x);
   if(x>=80)
        printf("grade A");
    else if(x>=70)
        printf("grade B");
    else if(x>=60)
        printf("grade C");
    else if(x>=50)
        printf("grade D");
    else if(x<50)
        printf("grade F");

return 0;
}
