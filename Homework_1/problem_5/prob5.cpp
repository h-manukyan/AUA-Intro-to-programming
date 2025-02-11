#include <iostream>
#include <vector>

using namespace std;

vector<int> out;

int main(){

	int N, var;
	cout << "Enter the number to modify" << endl;
	cin >> N;

	while (N != 0){
	
	var = N % 10;
	N /= 10;
	
	out.push_back(var);
	}

	for (int num : out) cout << num;
	return 0;
}
