#include <iostream>

using namespace std;

int main(){
//Creating variables
int N;
int Sum = 0;
// Initializing variables
cout << "Enter the value between 1-1000" << endl;
cin >> N;
// Checking if N is valid number
if (N <= 1 || N >= 1000){
	cout << "Invalid number, try again";
	return 0;
}

for(int i; i < N; i++){
	if (i % 3 == 0 || i % 5 == 0){
		Sum += i;
	}
}

cout << "Here is the sum of multipliers - " << Sum;
	return 0;
}
