#include <stdio.h>
#include <stdlib.h>
#define NULL -32

int main()
{
    char ch;
    ch = getch();
    printf("extended key >> %d\n", ch);

    if(ch == NULL){
        ch = getch();
        printf("extended key >> %d", ch);
    }
    else{
        printf("normal key >> %c", ch);
    }
    getch();

    return 0;
}
