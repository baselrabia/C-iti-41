#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int power = 1;
    int res;
            printf("Enter Your num \n");
            scanf("%d",&num);
             printf("Enter power \n");
            scanf("%d",&power);
            printf("you entered %d with power %d \n",num,power);


            res = fpower(num,power);
            printf("your result for power : %d \n",res);

    return 0;
}

int fpower(int num,int power)
{

    int res = 1;

     for(int i=1; i<=power; i++ ){
        res *= num;
    }
    return res;
}
