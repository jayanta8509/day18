// Write a program to Add two fractions
#include <iostream>
using namespace std;
void two_fractions(int a1, int a2, int b1, int b2) {
  int ok = a1 * b2;
  int ok1 = a2 * b1;
  int x = ok + ok1;
  int y = a2 * b2;
  int gcd_no = 0;
  for (int c = 1; c <= x && c <= y; ++c) {
    if (x % c == 0 && y % c == 0)
      gcd_no = c;
  }
  int x1 = x / gcd_no;
  int y1 = y / gcd_no;
  cout << x1 << "/" << y1 << endl;
}
int main() {
  int a1 = 2, a2 = 3, b1 = 4, b2 = 3;
  two_fractions(a1, a2, b1, b2);
}