#include <iostream>
using namespace std;

int main () {
  int number1;
  int number2;
  int operation;

  cout << "Insira o primeiro numero" << endl;
  cin >> number1;
  cout << "Insira o segundo numero" << endl;
  cin >> number2;
  cout << "Insira a conta" << endl;
  cin >> operation;
  if (operation == 1) {
    cout << number1+number2 << endl;
  }
  else if (operation == 2) {
    cout << number1-number2 << endl;
  }
  else if (operation == 3) {
    cout << number1*number2 << endl;
  }
  else if (operation == 4) {
    cout << number1/number2 << endl;
  }
  
}
