#include <stdio.h>
#include <stdlib.h>

int main()
{
        int x, y;
        char sign;
         printf("Enter Your first Num \n");
        scanf("%d", &x);
        printf("Enter Your second Num \n");
        scanf("%d", &y);
        printf("Enter Your operation \n");
        sign = getchar();


        printf("equation : %d %c %d \n",x,sign,y);

    switch(sign)
     {
         case'+':
            printf("sum  = %d \n",x+y);
            break;
         case'-':
            printf("sub = %d \n",x-y);
            break;
         case'*':
            printf("multiply = %d \n",x*y );
            break;
         case'/':
            printf("division = %d \n",x/y );
            break;
         default:
           printf("you entered wrong operation");
    }


    return 0;
}
