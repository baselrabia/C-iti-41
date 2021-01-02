#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, rev = 0;

  printf("Enter a number to reverse\n");
  scanf("%d", &num);

  while (num != 0)
  {
    rev *= 10;
    rev += num%10;
    num = num/10;
  }

  printf("Reverse of the number = %d\n", rev);

    return 0;
}
