#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void simple_calculator(float x, float y)
{
    char operation;
    cout << "Enter ( + , - , * , / )operation that you like to perform :: ";
    cin >> operation;
    switch (operation)
    {
    case '+':
        cout << x << " + " << y << " = " << x + y<<endl;
        break;
    case '-':
        cout << x << " - " << y << " = " << x - y<<endl;
        break;
    case '*':
        cout << x << " * " << y << " = " << x * y<<endl;
        break;
    case '/':
        cout << x << " / " << y << " = " << x / y<<endl;
        break;
    default:
        cout << "Invalid operation" << endl;
        break;
    }
}

int main()
{
    int permission;
    cout << "Open Simple Calculator || Yes -- 1 || No -- 0 " << endl;
    cin >> permission;
    if (permission == 1)
    {
        float num1, num2;
        cout << "Enter Numbe 1 = ";
        cin >> num1;
        cout << "Enter Number 2 = ";
        cin >> num2;
        simple_calculator(num1 , num2);
    }
    else
    {
        cout << " THANK YOU FOR YOUR VIST " << endl;
    }
    return 0;
}