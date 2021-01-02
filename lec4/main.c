#include <stdio.h>
#include <stdlib.h>

    int main()
    {
    int degree[3][4];

     for (int i=0 ; i<3 ; i++)
       {
           for (int j=0 ; j<4 ; j++)
           {
               printf("\n plz enter degree of student no %d in subject %d :", i+1,j+1) ;
               scanf("%d",&degree[i][j]) ;
           }
           printf("\n") ;
       }
   for (int i=0 ; i<3 ; i++)
   {
       for (int j=0 ; j<4 ; j++)
       {
           printf("\n plz enter degree of student no %d in subject %d :", i+1,j+1) ;
           printf("%d",degree[i][j]) ;
       }
       printf("\n") ;
   }

   int sum[3] = {0};

    for (int i=0 ; i<3 ; i++)
   {
       for (int j=0 ; j<4 ; j++)
       {
            sum[i]+= degree[i][j];
       }
        printf("\n sum result of student no %d:", i+1) ;
        printf("%d \n",sum[i]) ;
        printf("\n") ;

   }

    int avg[4] = {0};

     for (int i=0 ; i<4 ; i++)
   {
       for (int j=0 ; j<3 ; j++)
       {
         avg[i]+= degree[j][i] ;
       }
        avg[i]= avg[i]/3 ;
        printf("avg of subject no %d :  %d \n" ,i ,avg[i]) ;
        printf("\n") ;

   }


    return 0;
}
