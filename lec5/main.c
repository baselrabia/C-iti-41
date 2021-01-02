#include <stdio.h>
#include <stdlib.h>

int swap(int* x, int* y){
 int temp = *x;
 *x= *y;
 *y= temp;
}

int main()
{

    int a = 10;
    int b = 12;

    printf("before : a => %d , b => %d \n ",a,b);

    swap(&a,&b);

    printf("after : a => %d , b => %d \n ",a,b);


    return 0;
}
