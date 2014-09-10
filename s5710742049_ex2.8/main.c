#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;
    printf(" Enter midterm final : ");
    scanf("%d %d",&x,&y);
    z = x+y;

    if(z >= 60)
        printf("pass with score %d",z);
    else if(z < 60)
        printf("fail with score %d",z);

    return 0;
}
