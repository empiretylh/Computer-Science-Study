//Author : Thura Lin Htut
//Page : 72 (98)
//Project : Currency_Exchange
/*Question -
*
6. On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
Write a program that allows the user to enter an amount in dollars, and then displays this
value converted to these four other monetary units.
*/

#include <iostream>

using namespace std;

int main(){
    //Declare different currency worth in dollar
    //we use double to store decimal value

    double pound = 1.487; //British pound
    double franc = 0.173; //French franc
    double deutschemark = 0.584; // German deutschemark
    double yen = 0.00955;

    double user_amount;

    cout << "Enter an amount in dollar : ";
    cin >> user_amount;

    cout << "Pound :" << user_amount * pound << endl;
    cout << "Franc :" << user_amount * franc << endl;
    cout << "Deutschemark :" << user_amount * deutschemark << endl;
    cout << "Yen :" << user_amount * yen << endl;



return 0;
}

