#include <cmath>
#include <iostream>

using namespace std;

int main() {
  cout << "Hello! My name is Ahmad and this is my Github Practice Task.\n"
       << endl;
  cout << "--- Simple Calculator ---" << endl;

  char op;
  double num1, num2;

  cout << "Enter first number: ";
  if (!(cin >> num1)) {
    cout << "Invalid input." << endl;
    return 1;
  }

  cout << "Enter operator (+, -, *, /, %): ";
  if (!(cin >> op)) {
    cout << "Invalid input." << endl;
    return 1;
  }

  cout << "Enter second number: ";
  if (!(cin >> num2)) {
    cout << "Invalid input." << endl;
    return 1;
  }

  cout << "\nResult: ";

  switch (op) {

  case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    break;

  case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    break;

  case '*':
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    break;

  case '/':
    if (num2 != 0.0) {
      cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    } else {
      cout << "Error! Division by zero." << endl;
    }
    break;

  case '%':
    if (num2 != 0.0) {
      cout << num1 << " % " << num2 << " = " << fmod(num1, num2) << endl;
    } else {
      cout << "Error! Division by zero." << endl;
    }
    break;

  default:
    cout << "Error! Invalid operator." << endl;
    break;
  }

  return 0;
}
