#include "calculator.h"

using namespace std;

int main(void){
    double num1, num2;
    string op;
    
    cout << "Please enter the operation you wish to use, followed by the first and second operands." << endl;
    cin >> op >> num1 >> num2;
    if(!(op == "+" || op == "-" || op == "*" || op == "/" || op == "plus" || op == "minus" || op == "mul" || op == "div")){
        cout << "Invalid operation." << endl;
        return 0;
    }

    cout << "The operation and operands inputted are: " << endl;
    if(op == "+" || op == "plus"){
        cout << "+ " << num1 << " " << num2;
    }
    else if(op == "-" || op == "minus"){
        cout << "- " << num1 << " " << num2;
    }
    else if(op == "*" || op == "mul"){
        cout << "* " << num1 << " " << num2;
    }
    else if(op == "/" || op == "div"){
        cout << "/ " << num1 << " " << num2;
    }
    return 0;
}