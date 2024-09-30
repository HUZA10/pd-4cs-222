#include <iostream>
using namespace std;

void task(int number_of_hours,int number_of_minutes);
main()
{
           int number_of_hours;
           cout << "Enter number_of_hours =";
           cin >> number_of_hours;
           int number_of_minutes;
           cout << "Enter number_of_minutes =";
           cin >> number_of_minutes;
           task(number_of_hours, number_of_minutes);
}
void task(int number_of_hours,int number_of_minutes)
           {          
           if ((number_of_hours*60) < number_of_minutes)
           {
           cout << number_of_minutes;
           }
           if ((number_of_hours*60) > number_of_minutes)
           {
           cout << number_of_hours;
           }
           
}
         


          

 