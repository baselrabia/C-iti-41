#include <stdio.h>
#include <stdlib.h>

int main()
{
char firstname[10],lastname[10],fullname[30];

printf("enter first name plz \n");
scanf("%s",firstname);

printf("enter last name plz \n");
scanf("%s",lastname);

strcpy(fullname,firstname);
strcat(fullname," ");
strcat(fullname,lastname);
printf("your full name is %s \n",fullname);
    return 0;
}
