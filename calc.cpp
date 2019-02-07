#include <iostream>
using namespace std;

int main() { // Creating main function
	int sum, num;
	char oper;

	while(cin >> num) {
		// cout << "num " << num << endl;

		if (oper == '+') {
			sum = sum + num;
		} else if (oper == '-') {
			sum = sum - num;
		} else {
			sum = sum + num;
		}

		cin >> oper;
	}

	cout << sum << endl;
	return sum;
}