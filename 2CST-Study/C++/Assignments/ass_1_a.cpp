/*
Section - A (Assignment)
Write a C++ program that accept myanmar mark, english mark and math mark from user.
The program checks if the student pass or fail the exam. If the student pass the exam,
the program will also check that student get distinction or not
*/


#include <iostream>

using namespace std;

int main(){

    int myan, eng, math; //Define three variable to store marks

    //Display
    cout << "Enter Myanmar Mark : ";
    cin >> myan;

    cout << "Enter English Mark : ";
    cin >> eng;

    cout << "Enter Math Mark : ";
    cin >> math;

    if(myan >= 40 && eng >= 40 && math >= 40){
        cout << "You pass the exam." << endl;

        if(myan >= 80)
            cout << "You get distinction on Myanmar" << endl;
        if(eng >= 80)
            cout << "You get distinction on English" << endl;
        if (math >= 80)
            cout << "You get distinction on Math" << endl;

        if (myan < 80 && eng < 80 && math < 80)
            cout << "You have no distinction" << endl;
    }else{
        cout << "You failed the exam" << endl;
    }

    return 0;
}
