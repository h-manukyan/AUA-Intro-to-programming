#include <iostream>

using namespace std;

int main(){
// Creating variable
int Num;
int Sum = 0;
//Initializing it
cout << "Enter the integer" << endl;
cin >> Num;
while (Num != 0){
	Sum += Num % 10;
	Num /= 10;
}
cout << "The sum is - " << Sum;

	return 0;
}
