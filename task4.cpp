#include <iostream>
using namespace std;

void task(float the_ticket_price_in_dollars,string your_countrys_name);
main()
{
           while (true)
           {
           string your_countrys_name;
           cout << "Enter your_countrys_name =";
           cin >> your_countrys_name;
           float the_ticket_price_in_dollars;
           cout << "Enter the_ticket_price_in_dollars =";
           cin >> the_ticket_price_in_dollars;
           task(the_ticket_price_in_dollars, your_countrys_name);
           }
}
void task(float the_ticket_price_in_dollars,string your_countrys_name)
           {
           if (your_countrys_name == "pakistan")
           {
           float X;
           X =the_ticket_price_in_dollars*0.95;
           cout << "Final ticket price after discount =" << X << endl;
           }
           if (your_countrys_name == "Ireland")
           {
           float Y;
           Y =the_ticket_price_in_dollars*0.90;
           cout << "Final ticket price after discount =" << Y << endl;
           }
           if (your_countrys_name == "India")
           {
           float Z;
           Z =the_ticket_price_in_dollars*0.80;
           cout << "Final ticket price after discount =" << Z << endl;
           }
           if (your_countrys_name == "England")
           {
           float L;
           L =the_ticket_price_in_dollars*0.70;
           cout << "Final ticket price after discount =" << L << endl;
           }
           if (your_countrys_name == "Canada")
           {
           float C;
           C =the_ticket_price_in_dollars*0.55;
           cout << "Final ticket price after discount =" << C << endl;
           }
}


          

 