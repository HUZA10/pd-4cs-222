#include <iostream>
using namespace std;

void task(int speed);
main()
{
           int speed;
           cout << "speed =";
           cin >> speed;
           task(speed);
}
void task(int speed)
           {
           if (speed >= 105)
           {
           cout << "YOU WILL BE CHALLENGED!!";
           }
           else
           {
           cout << "Perfect! you are going good.";
           }
}


          

 