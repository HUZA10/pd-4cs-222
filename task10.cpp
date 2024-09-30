#include <iostream>
using namespace std;

void one(int number_of_people_in_the_household,int number_of_rolls_of_TP);
main()
{
           int number_of_people_in_the_household;
           cout << "Enter number_of_people_in_the_household =";
           cin >> number_of_people_in_the_household;
           int number_of_rolls_of_TP;
           cout << "Enter number_of_rolls_of_TP =";
           cin >> number_of_rolls_of_TP;
           one(number_of_people_in_the_household, number_of_rolls_of_TP);
}



void one(int number_of_people_in_the_household, int number_of_rolls_of_TP)
   

{
           int tr_use;
           tr_use = (number_of_rolls_of_TP*500)/( number_of_people_in_the_household*57);          
           if (tr_use >= 14)
           {
           cout << "your TP will last " << tr_use << "days, no need to panic!";
           }
           else
           {
           cout << "Your TP will only last " << tr_use << "days ,Buy more!";
           }
           
}
         


          

 