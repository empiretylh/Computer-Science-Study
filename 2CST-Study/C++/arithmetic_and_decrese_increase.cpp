//Author : Thura Lin Htut
//Page : 71 (97)
/*Question -
*3. Write a program that generates the following output:
        10
        20
        19
    Use an integer constant for the 10, an arithmetic assignment operator to generate the 20,
    and a decrement operator to generate the 19.
*/

#include <iostream>

using namespace std;

int main(){
    int number = 10; //decalare integer 10

    cout << "Integer Constant : " << number << endl;

    //using arithmetic assignment to generate 20
    number *= 2;

    cout << "After using arithmetic assignment : " << number << endl;

    //using decrement operator to generate 20 from 19;
    number--;

    cout << "After using decrement operator : " << number;


return 0;
}
