// Author : Thura Lin Htut
/* Question : Assuming there are 7.481 gallons in a cubic foot,
  write a program that asks the user to enter a number of gallons,
  and then displays the equivalent in cubic feet.
*/

#include <iostream>

using namespace std;

int main(){
    float gallons, cubicfeet; // Declare two variable


    cout << "Enter a number of gallons :";
    cin >> gallons;

    cubicfeet = gallons / 7.481;

    cout << "Equivalent in cubic feet : " << cubicfeet;
    return 0;

}
