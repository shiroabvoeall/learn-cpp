#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void addit(int x, int y) {
  cout << x + y << endl;
}
void subtr(int x, int y) {
  cout << x - y << endl;
}
void mult(int x, int y) {
  cout << x * y << endl;
}
void divide(float x, float y) {
  cout << x / y << endl;
}

void operat(int x, int y, char z) { 
  switch(z) {
    case '+':
      addit(x,y);
      break;
    case '-':
      subtr(x,y);
      break;
    case '*':
      mult(x,y);
      break;
    case '/':
      divide(x,y);
      break;
    default:
    cout << "Invalid response!" << endl;
  }
}

int main () {
  int x,y;
  char z;
  cout << "Enter first num : ";
  cin >> x;
  cout << "Enter second num : ";
  cin >> y;
  cout << "Enter operator  : ";
  cin >> z;

  operat(x,y,z);
}