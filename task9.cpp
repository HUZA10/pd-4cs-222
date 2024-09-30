#include<iostream>
using namespace std;
void tom(int Holiday );
main() 
{ 

                           int Holidays;
                           cout << "Enter number of Holidays :";
                           cin >> Holidays;
                           tom(Holidays);

}
void tom(int Holidays )
{                           
                           int X;
                           X = 365-Holidays ;
                           int Y;
                           Y = Holidays*127 + X*63 ;
                           if (Y <= 30000)
                           {
                           int Z;
                           Z = 30000-Y;
                           cout << "Tom sleeps well" << endl;
                           cout << Z/60 <<" hours and" << Z%60 <<" minutes less for play";
                           }
                           if (Y > 30000 )
                           {
                           cout << "Tom will run away" << endl;
                           int L;
                           L = Y-30000;
                           cout << L/60 <<" hours and" << L%60 <<" minutes more for play";
                           }

}