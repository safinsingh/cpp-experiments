#include <iostream>
using namespace std;

float test(float num1, float num2, char Operator)
{
    

    float temp; 
    cout << "Number 1 is " << num1 << endl;
    cout << "Number 2 is " << num2 << endl;
    cout << "Operator is: " << Operator << endl;
  

    switch(Operator)
    {
    case '+':
        temp = num1+num2;
        cout << " Number 1 + Number 2 = " << temp;
        break;

    case '-':
        temp = num1-num2;
        cout << " Number 1 - Number 2 = " << temp;
        break;

    case '*':
        temp = num1*num2;
        cout << " Number 1 * Number 2 = " << temp;
        break;

    case '/':
         temp = num1/num2;
         cout << " Number 1 / Number 2 = " << temp;
         break;

    default:
        cout << "You have entered the wrong operator";
        break;
    }
  return temp;
}
