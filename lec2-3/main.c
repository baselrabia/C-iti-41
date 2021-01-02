#include <stdio.h>
#include <stdlib.h>

int main()
{
                char sign;

        for(int i=0; i<5; i++ ){
                printf("Enter Your char \n");
                sign = getch();
                printf("you entered %c \n",sign);

                switch(sign)
                 {
                     case'e':
                        printf("exit \n");
                        break;
                     case'd':
                        printf("display \n");
                        break;
                     case'n':
                        printf("new \n");
                        break;
                     default:
                       printf("you entered wrong char \n");
                 }

        }
    return 0;
}
