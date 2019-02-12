#include <iostream>

using namespace std;

int main() {
	int sum = 0, num; // Declaring integer variables sum with a value -, and integer variable num
	char oper; // Declaring a character variable named oper 

	while(cin >> num) { // Creates a while loop to read the file into the variable num
		if (oper == '+') { // When the operation is readable as the addition sign
			sum = sum + num; // Add the number to the variable sum
		} else if (oper == '-') { // else if operation is subtraction
			sum = sum - num; // Subtract number
		} else {
			sum = sum + num; // Otherwise, add number
		}

		cin >> oper; // Read the operation sign

		if (oper == ';') { // When the operation is a semicolon
			cout << sum << endl; // Prints out the sum
			sum = 0; // Resets the sum value
			oper = ' '; // Resets the operation value
		 // After the first loop, store the operation from formula.txt into the variable oper
		}
	}
	return 0;
}