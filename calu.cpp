include <iostream>
#include "Calculator.h"
#include "Variables.h"

using namespace std;

void calMainLaunch()
{
    //vars
    char op;
    double num1;
    double num2;
    double result;

    Openingcalu();
    
    SpacersForTerm();
    cout << "Enter either ( + - * / ): " << endl;
    cin >> op;
    SpacersForTerm();
    cout << "Enter #1: " << endl;
    cin >> num1;
    SpacersForTerm();
    cout << "Enter #2: " << endl;
    cin >> num2;
    SpacersForTerm();
    
    switch (op)
    {

    case '+':
        result = num1 + num2;
        cout << "result: " << result << endl;
        break;

    case '-':
        result = num1 - num2;
        cout << "result: " << result << endl;
        break;

    case '*':
        result = num1 * num2;
        cout << "result: " << result << endl;
        break;

     case '/':
        result = num1 / num2;
        cout << "result: " << result << endl;
        break;
    
    default:
        cout << "That wasn't a valid response. " << endl;
        break;
    }

    CloserCal();
}

void Openingcalu()
{
    SpacersForTerm();
    GreetingCal();
    SpacersForTerm();
    PrintCalOpener();
}

void GreetingCal()
{
    cout << "Welcome to the simple Calculator." << endl;
    cout << "How it works:" << endl;
    cout << "First pick your operation then input your number. " << endl;
}

void PrintCalOpener()
{
    cout << "********************** CALCULATOR **********************\n" << endl;
}

void CloserCal()
{
    cout << "********************************************************" << endl;
}
