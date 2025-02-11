#include <iostream>

using namespace std;

int main(){

	int N;
	cout << "Enter the resolution" << endl;
	cin >> N;

	for (int i = 1; i < N; i++) {
		for (int j = 1; j <= i; j++) cout << '*';
		cout << endl;
	}

	for (int i = 1; i < N; i++) {
		for (int k = N-1; k >= i; k--) cout << ' ';
		for (int j = 1; j <= i; j++) cout << '*';
		cout << endl;
	}
	return 0;
}
