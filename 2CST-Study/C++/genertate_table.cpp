//Author : Thura Lin Htut
//Page : 71 (97)
/*Question :
Write a program that generates the following table:
    1990      135
    1991     7290
    1992    11300
    1993    16200
Use a single cout statement for all output.
*/

#include <iostream>
#include <iomanip> // Import This Library for setw() function

using namespace std;


int main(){
    //setw() ဆိုတာ set width လို့ခေါ်ပါတယ်။ စာကြောင်းနှစ်ကြောင်းကို လိုသလောက် width သတ်မှတ်ပြီး ခြားနိုင်ပါတယ်။

    cout << 1990 << setw(7) << 135 << endl
         << 1991 << setw(7) << 7290 << endl
         << 1992 << setw(7) << 11300 << endl
         << 1993 << setw(7) << 16200 << endl;

return 0;

}
