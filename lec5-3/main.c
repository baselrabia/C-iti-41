#include <stdio.h>
#include <stdlib.h>


int main()
{

    int x;
    printf("enter array size \n");

    scanf("%d",&x);


    int* ptr= (int*) malloc(x * sizeof(int));

    printf("enter elements in array with size : %d \n", x);

    for(int i=0; i<x; i++)
    {
        scanf("%d",ptr+i);
    }
        printf("\n");

     for(int i=0; i<x; i++)
    {
        printf("element %d : %d \n ",i+1,*(ptr+i));
    }

    free(ptr);


    return 0;
}
