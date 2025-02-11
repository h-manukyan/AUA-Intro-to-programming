#include <iostream>

using namespace std;

int main(){

	int N;
	int sum = 0;
	int test = 1;
	cout << "Enter the number" << endl;
	cin >> N;
	for(int i = 1; i < N; i++){
		for (int j = 2; j <= test/2; j++){
			if(test % j == 0){
				sum += 1;
			}
		}
		if (sum == 0) cout << test << ' ';
		test++;
		sum = 0;
	}

	return 0;
}
