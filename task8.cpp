#include <iostream>
using namespace std;

void flowershop(int red_rose,int white_rose,int tulips,float X);
main()
{
           int red_rose;
           cout << "red_rose =";
           cin >> red_rose;
           int white_rose;
           cout << "white_rose =";
           cin >> white_rose;
           int tulips;
           cout << "tulips =";
           cin >> tulips;
           float X;
           X =(red_rose*2)+(white_rose*4.10)+(tulips*2.50);
           cout << "Original price =" << X << endl;  
           flowershop(red_rose, white_rose, tulips,X);
}
void flowershop(int red_rose,int white_rose,int tulips,float X)
{         
           if (X > 200)
           {
           float Y;
           Y = X*0.80;
           cout << "Price after discount" << Y << endl;
           }
           if (X < 200)
           {
           cout << "No discount applied";
           }
}

         


          

 