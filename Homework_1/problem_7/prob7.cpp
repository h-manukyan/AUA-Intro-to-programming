#include <iostream>
#include <vector>

using namespace std;

vector<int> out;

int main(){

	int N, var;
	cout << "Enter the number to modify" << endl;
	cin >> N;
	int gurgenchik = N;
	int result = N;

	while (N != 0){
	
		var = N % 10;
		N /= 10;
	
		out.push_back(var);
	}

	for (int i = out.size() - 1; i >= 0; i--){
		var = gurgenchik % 10;
		gurgenchik /= 10;
		if (out[i] != var){
			cout << "The number is not palindrome" << endl;
			return 0;
		}
	}
	
	

	cout << "The number " << result << " is polindrome"; 
	return 0;
}
