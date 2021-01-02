#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define null -32

int main()
{
    char menu[3][10]={"new","display","exit"};
    int index;
    char ch;

    printf(" new\n display\n exit\n");
    do{
       printf("please select from menu > 1 , 2 , 3 \n ");
       scanf("%d",&index);

        for(int i=0;i<3;i++){
            if(i==index-1){
                textattr(0xf0);
                printf("%s \n",menu[i]);
                textattr(0x07);
            }

            else{
                printf("%s \n",menu[i]);
            }
        }

        printf("plz enter your character >>  n or d or e  \n");

        ch=getch();

        switch(ch){
          case 'n':
          case 'N':
            printf("%s \n",menu[0]);
            break;

          case 'd':
          case 'D':
            printf("%s \n",menu[1]);
            break;

          case 'e':
          case 'E':
          case '27':
            printf("%s \n",menu[2]);
            break;

        default:
            printf("error\n");
          }

    }while(ch!='e');

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

  void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

}

