#include <stdio.h>
#include <stdlib.h>


int main()
{

    int arr [5];
    int* ptr= &arr[0];

    printf("enter elements in array \n");

    for(int i=0; i<5; i++)
    {
        scanf("%d",ptr+i);
    }
        printf("\n");

     for(int i=0; i<5; i++)
    {
        printf("element %d : %d \n ",i+1,*(ptr+i));
    }



    return 0;
}
