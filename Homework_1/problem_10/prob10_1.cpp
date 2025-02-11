#include <iostream>

using namespace std;

int main(){

	int N, M;
	char c;
	cout << "Enter the lengh and with of the rectangle and the symbol u want it to be constracted" << endl;
	cin >> N >> M >> c;

	for (int i = 0; i < N; i++){ 
		cout << c;
	}
	cout << endl;	
	for (int i = 0; i < M-2; i++){
		cout << c;
	
		for(int j = 0; j < N-2; j++){ 
			cout << ' ';
		}
	
		cout << c;
		cout << endl;
	}
	for (int i = 0; i < N; i++){
	       	cout << c;
	}


	return 0;
}
