#include <stdio.h>
#include <stdlib.h>

int main()
{
   int row ,col ;
   int** ptr ;
   printf("plz enter row:") ;
   scanf("%d" ,&row) ;
   printf("plz enter col:") ;
   scanf("%d" ,&col) ;

   ptr = (int*) malloc(row*sizeof(int)) ;
   for(int i=0 ; i<row ; i++)
   {
          ptr[i] = (int*) malloc(col*sizeof(int)) ;
   }

   for(int i=0; i<row ; i++)
   {
       for(int j=0 ; j<col ;j++)
       {
         printf(" enter cell row => [%d] and col => [%d]  \n",i,j) ;

           scanf("%d",&ptr[i][j]) ;
       }
   }

   for(int i=0; i<row ; i++)
   {
       for(int j=0 ; j<col ;j++)
       {
           printf(" cell ([%d], [%d]) => %d \n",i,j,ptr[i][j]) ;
       }
   }


      for(int i=0; i<row ; i++)
     {
          free(ptr[i]) ;
     }
       free(ptr) ;
    return 0;
}
