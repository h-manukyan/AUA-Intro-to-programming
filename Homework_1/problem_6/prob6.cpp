#include <iostream>

using namespace std;

int main(){

	int N;
	cout << "Enter the number" << endl;
	cin >> N;

	for (int i = 2; i <= N/2; i++){
		if(N % i == 0){
			cout << "N is not prime number" << endl;
			return 0;
		}
	}
	cout << "N is prime number";

	return 0;
}
