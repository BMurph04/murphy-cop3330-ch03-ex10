#include "calculator.h"

using namespace std;

int main(void){
    int num1, num2;
    string op;
    
    cout << "Please enter the operation you wish to use, followed by the first and second operands." << endl;
    cin >> op >> num1 >> num2;
    if(!(op == "+" || op == "-" || op == "*" || op == "/")){
        cout << "Invalid operation." << endl;
        return 0;
    }
    
    int result = calculator(num1, num2, op);
    cout << "The result is " << result << "." << endl;

    return 0;
}

int calculator(int num1,int num2, string op){
    if(op == "+"){
        return num1+num2;
    }
    else if(op == "-"){
        return num1-num2;
    }
    else if(op == "*"){
        return num1*num2;
    }
    else if(op == "/"){
        return num1/num2;
    }
    return 0;
}