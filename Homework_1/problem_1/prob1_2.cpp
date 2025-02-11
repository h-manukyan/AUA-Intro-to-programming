#include <iostream>

using namespace std;

int main(){
// Creating variables for program
double num1, num2;
char op;
// Initializing variables
cout << "Enter the equation" << endl;
cin >> num1 >> op >> num2;
// Creating checking system for expression
switch (op)
{
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '/':
		cout << num1 / num2;
		break;
	default:
		cout << "No such operator found";
}
// Finishing program
return 0;
}

