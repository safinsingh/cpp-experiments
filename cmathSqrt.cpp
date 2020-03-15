#include <iostream>
#include <cmath>
using namespace std;

float test(float a, float b) {
  float computeSqrt;
  computeSqrt = pow(a,2) + pow(b,2);
  computeSqrt = sqrt(computeSqrt);
  cout << "Answer is " << computeSqrt << endl;
  return computeSqrt;
}
