#include <stdio.h>
#include <stdlib.h>

int main()
{
            int x;
            int f = 0;


            for(int i=1; i<=5; i++ ){
                printf("Enter Your num \n");
                scanf("%d",&x);
                f+= x;
            }

            printf("your result for summution : %d \n",f);

    return 0;
}
