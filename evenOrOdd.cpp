#include <iostream>
using namespace std;

int test(int number)
{
    int temp;
    temp = (number % 2 == 0) ? false : true;
    
    cout << "Computing whether " << number << " is an even or odd integer" << endl;
    
    if (temp == 1) {
        cout << "Number is even" << endl;
    } else {
        cout << "Number is odd" << endl;
    }

    return temp;
}
