#include <iostream>
#include <windows.h>
using namespace std;


void printH();
void printA();
void printS();
void printN();
void gotoxy(int x ,int y);
main()
{ 
             int x=0;
             int y=5;
             
             system("cls");

             gotoxy(x,y);
             printH();

             gotoxy(x,y+7);
             printA();

             gotoxy(x,y+14);
             printS();
 
             gotoxy(x,y+21);
             printS();

             gotoxy(x,y+28);
             printA();

             gotoxy(x,y+35);
             printN();
}
void gotoxy(int x ,int y)
{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
void printH()
{
cout << "*   * \n";
cout << "*   * \n";
cout << "***** \n";
cout << "*   * \n";
cout << "*   * \n";
}
void printA()
{
cout << "  *   \n";
cout << "*   * \n";
cout << "***** \n";
cout << "*   * \n";
cout << "*   * \n";
}
void printS()
{
cout << "***** \n";
cout << "*     \n";
cout << "***** \n";
cout << "    * \n";
cout << "***** \n";
}
void printN()
{
cout << "*   * \n";
cout << "**  * \n";
cout << "* * * \n";
cout << "*  ** \n";
cout << "*   * \n";
}
