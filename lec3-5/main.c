#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;


    printf("enter the count of numbers in array \n");
    scanf("%d", &count);
    int arr[count];
    printf("enter first element \n");


    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
        printf("Next element \n");
    }

    fprint(arr,count);

    printf("%d ", fsum(arr,count));
    return 0;
}

void fprint(int arr[],int count)
{
    printf("Printed Result  \n");
    for (int i = 0; i < count; i++){
      printf("%d ", arr[i]);
    }
    printf("\n");
}

int fsum(int arr[],int count)
{
    int res=0;
    printf("Sum Result  \n");
    for (int i = 0; i < count; i++){
      res +=arr[i];
    }
    return res;

}

