#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> vec;
	int a, b;
	cout << "Enter numbers which u want to concatenate" << endl;
	cin >> a >> b;
	vec.push_back(a);
	vec.push_back(b);
	
	for (int num : vec) cout << num;

	return 0;
}
