//Author : Thura Lin Htut
//Project : Calucation Two Number with Operator

#include <iostream>


using namespace std;

int main(){
    int number1, number2; // define two variable to store user input number
    char op; // define op variable to store operator ( +, - , * , /)

    cout << "Enter Number 1 : ";
    cin >> number1;

    cout << "Enter Number 2 : ";
    cin >> number2;

    cout << "Enter Operator (+, -, *, /) : " ;
    cin >> op;

    if(op == '+')
        cout << number1 << " + " << number2 << " = " << (number1 + number2);
    else if (op == '-')
        cout << number1 << " - " << number2 << " = " << (number1 - number2);
    else if (op == '*')
        cout << number1 << " * " << number2 << " = " << (number1 * number2);
    else if (op == '/')
        cout << number1 << " / " << number2 << " = " << (number1 / number2);
    else
        cout << "Invalid Operator";


return 0;
}
