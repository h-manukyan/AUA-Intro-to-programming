#include <iostream>

using namespace std;

int main(){

double num1, num2;
char op;

cout << "Enter the equation" << endl;
cin >> num1 >> op >> num2;

if (op == '+') cout << num1 + num2;	
else if (op == '-') cout << num1 - num2;
else if (op == '*') cout << num1 * num2;
else if (op == '/') cout << num1 / num2;
else cout << "No such operator found";

return 0;
}
