#include <stdio.h>
#include <stdlib.h>

int main()
{
        int degree;
        printf("Enter Your Degree \n");

        scanf("%d", &degree);
        printf("Your Degree is %d \n",degree);

        if(degree>85)
            printf("excellent \n");
        else if(degree>75)
            printf("very good\n");
        else if(degree>65)
            printf("good\n");
        else if(degree>50)
            printf("accepted\n");
        else
            printf("failed\n");


    return 0;
}
