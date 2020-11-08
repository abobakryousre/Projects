#include <stdio.h>
#include <stdlib.h>
#define extended -32
#include<windows.h>
#include <string.h>


COORD coord={0,0};                   // this is global variable
                                    //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }


 void main()
 {

     char arr[40];
     char key;
     int index = 0;
     int count;
     int flag = 1;
     int end;

     while(flag)
     {
        key = getch();
        if(key == -32) // extended key
        {
            key = getch();
            if(key == 75) // left
            {
                index --;
                gotoxy(index, 0);
            }
            else if (key == 77) // right
            {
                index ++;
                gotoxy(index, 0);

            }
            else if (key == 71) //home
            {
                index = 0;
                gotoxy(index, 0);

            }
            else if (key == 79) //end
            {
                gotoxy(end,0);
                index = end; // to but the index in it right position

            }
        }
        else if (key == 13) flag = 0;
        else{

            arr[index] = key;
            printf("%c", arr[index]);
            index ++;
            count ++;
            end = strlen(arr);
        }

     }


     printf("\n\n");
     for(index = 0; index <count ; index++)
    {
        printf("%c", arr[index]);
    }

 }


