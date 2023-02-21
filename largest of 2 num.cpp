#include <iostream>
using namespace std;

class Largest {
  int a, b;
public:
  void setData(int x, int y) {
    a = x;
    b = y;
  }
  friend void find_Max(Largest l);
};

void find_Max(Largest l) {
  if (l.a > l.b)
    cout << "Maximum number is " << l.a << endl;
  else
    cout << "Maximum number is " << l.b << endl;
}

int main() {
  int x, y;
  cout << "Enter the first number: ";
  cin >> x;
  cout << "Enter the second number: ";
  cin >> y;
  Largest l;
  l.setData(x, y);
  find_Max(l);
  return 0;
}

