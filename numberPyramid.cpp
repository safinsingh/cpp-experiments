#include <iostream>
using namespace std;

void test(int rows)
{
    for (int i = 1; i <= rows; ++i) {
        for (int z = 1; z <= i; ++z) {
            cout << "a ";
        }
        cout << "\n";
    }
}
