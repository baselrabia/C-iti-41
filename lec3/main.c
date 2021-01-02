#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int fac = 0;
            printf("Enter Your num \n");
            scanf("%d",&x);
            printf("you entered %d \n",x);


            fac = factor(x);
            printf("your result for factorial : %d \n",fac);

    return 0;
}

int factor(int x)
{
    int f = 1;

    for(int i=1; i<=x; i++ ){
        f = f * i;
    }
    return f;
}
