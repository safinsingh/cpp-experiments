#include <iostream>
#include <string>
using namespace std;

string test(int num) {
  string ans = ""; 
  for (int i = 1; i < 11; ++i) {
    int j = num*i;
    string z = to_string(j);
    string appender = z + " ";
    ans += appender;
  }
  return ans;
}
