#include <stdio.h>
#include <stdlib.h>

int main()
{
            int x;
            int f = 1;

            printf("Enter Your num \n");
            scanf("%d",&x);
            printf("you entered %d \n",x);

            for(int i=1; i<=x; i++ ){
                f = f * i;
            }

            printf("your result for factorial : %d \n",f);

    return 0;
}
