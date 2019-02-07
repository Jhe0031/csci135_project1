#include <iostream>
using namespace std;

int main() { // Creating main function
	int sum = 0, num; // Declaring integer variables sum with a value -, and integer variable num
	char oper; // Declaring a character variable named oper 

	while(cin >> num) { // While loop in order to iterate through formula.txt
		if (oper == '+') { // If loop
			// If the operation is addition
			sum = sum + num; // Add the number to the variable sum
		} else if (oper == '-') { // else if operation is subtraction
			sum = sum - num; // Subtract number
		} else { // Otherwise, add number
			sum = sum + num;
		}

		cin >> oper; // After the first loop, store the operation from formula.txt into the variable oper
	}

	cout << sum << endl; // Prints the sum
	return sum;
}