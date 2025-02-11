#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n, sum;
	cout << "Enter the number which u want to check" << endl;
	cin >> n;
	for (int i; i <= n/2; i++){
		sum = pow(2, i);
		if (sum == n){
			cout << "The number " << n << " is 2 to the power of " << i << endl;
			return 0;
		}
	}
	cout << "The number " << n << " is not a power of 2";


	return 0;
}
