#include <iostream>
using namespace std;

void one(int number_of_people_in_the_household,int number_of_rolls_of_TP,float Z);
main()
{
           int number_of_people_in_the_household;
           cout << "Enter number_of_people_in_the_household =";
           cin >> number_of_people_in_the_household;
           int number_of_rolls_of_TP;
           cout << "Enter number_of_rolls_of_TP =";
           cin >> number_of_rolls_of_TP;
           float X;
           X = number_of_people_in_the_household*57;
           float Y;
           Y = number_of_rolls_of_TP*500;
           float Z;
           Z = (Y//X);
           one(number_of_people_in_the_household, number_of_rolls_of_TP, Z);
}



void one(int number_of_people_in_the_household, int number_of_rolls_of_TP,float Z)
   

{          
           if (Z > 14)
           {
           cout << "your TP will last" << Z << "days, no need to panic!";
           }
           if (Z < 14)
           {
           cout << "Your TP will only last" << Z << "days ,Buy more!";
           }
           
}
         


          

 