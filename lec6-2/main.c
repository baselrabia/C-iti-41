#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col ;
    char** ptr ;
    printf("plz enter rows numbers :") ;
    scanf("%d", &row);
    printf("plz enter cols numbers :") ;
    scanf("%d", &col);
    ptr = (char*) malloc(row*sizeof(char)) ;


    for(int i=0 ; i<row ; i++)
    {
        ptr[i] = (char*) malloc(col*sizeof(char)) ;
    }

    for(int i=0 ; i<row ; i++)
    {
        printf("plz enter %d string :",i) ;
        scanf("%s",ptr[i]) ;

    }

    for(int i=0 ; i<row ; i++)
    {
         printf("string [%d] => %s \n",i,ptr[i]) ;
    }

    for(int i=0 ; i<row ; i++)
    {
        free(ptr[i]) ;
    }

    free(ptr) ;

    return 0;
}
