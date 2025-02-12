#include <iostream>

using namespace std;

int main(){

	int N;
	cout << "Enter the resolution" << endl;
	cin >> N;

	for (int i = 1; i <= N; i+=2) {
		for (int j = 0; j < N/2-i/2; j++){
		       	cout << ' ';
		}

		for (int k = 0; k < i; k++){
		       	cout << '*';
		}
		cout << endl;
	}
	
	return 0;
}
