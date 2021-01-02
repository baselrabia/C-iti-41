#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

  printf("Enter a number to reverse\n");
  scanf("%d", &num);


  printf("Reverse of the number = %d\n", frev(num));


    return 0;
}

int frev(int num)
{
    int rev =0;

    while (num != 0)
      {
        rev *= 10;
        rev += num%10;
        num = num/10;
      }

    return rev;
}
