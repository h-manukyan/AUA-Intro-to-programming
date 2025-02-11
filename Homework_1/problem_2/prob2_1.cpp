#include <iostream>

using namespace std;

int main() 
{
//Creating variable
int p;
//Creating checking system
while (p != -1){
	cout << "What percentage you got?" << endl;
	cin >> p;

	if (p >= 0 && p <= 59) cout << "Your grade is F " << endl;
	else if (p >= 60 && p <= 69) cout << "Your grade is D" << endl;
	else if (p >= 70 && p <= 79) cout << "Your grade is C" << endl;
	else if (p >= 80 && p <= 89) cout << "Your grade is B" << endl;
	else if (p >= 90 && p <= 100) cout << "Your grade is A" << endl;
	else if (p  == -1) return 0;
	else cout << "Something went wrong try again!" << endl;
}
	return 0;
}
