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

    int result = calculator(num1, num2, op);
    cout << "The result is " << result << "." << endl;
    
    return 0;
}

int calculator(double num1,double num2, string op){
    if(op == "+" || op == "plus"){
        return num1+num2;
    }
    else if(op == "-" || op == "minus"){
        return num1-num2;
    }
    else if(op == "*" || op == "mul"){
        return num1*num2;
    }
    else if(op == "/" || op == "div"){
        return num1/num2;
    }
    return 0;
}