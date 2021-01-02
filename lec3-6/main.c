#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int size, max, row,col;


    do {
      printf("enter the size of numbers in array \n");
        scanf("%d", &size);
        if(size%2 == 0){
            printf("you cant enter even number , it should be odd \n");
        }
    } while( size%2 == 0 );

    max=size*size;
    system("cls");

     for(int i=1;i<=max;i++)
          {
                if(i==1)
                {
                  row =1;
                  col=(size+1)/2;
                }
                else if(((i-1) % size) == 0){
                  row++;
                }
                else{
                  row--; col--;
                  if(row == 0)
                   row = size;
                  if(col == 0)
                   col = size;
                }
                gotoxy(col*10,row);
                printf(" %d ",i);

          }


    return 0;
}


void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
  GetStdHandle( STD_OUTPUT_HANDLE ),
  coord
    );
  }
