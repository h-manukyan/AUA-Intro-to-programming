#include <iostream>

using namespace std;

int main(){

	int N, M;
	cout << "Enter the lengh and with of the rectangle" << endl;
	cin >> N >> M;

	for (int i = 0; i < N; i++){ 
		cout << '*';
	}
	cout << endl;	
	for (int i = 0; i < M-2; i++){
		cout << '*';
	
		for(int j = 0; j < N-2; j++){ 
			cout << ' ';
		}
	
		cout << '*';
		cout << endl;
	}
	for (int i = 0; i < N; i++){
	       	cout << '*';
	}


	return 0;
}
