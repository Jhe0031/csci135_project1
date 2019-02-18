#include <iostream>
using namespace std;

int main() {
	int sum = 0, num; // Declaring integer variables sum with a value -, and integer variable num
	char oper; // Declaring a character variable named oper 

	while(cin >> num) { 
		if (oper == '+') { // If the operation is addition
			cin >> oper; // Checks the next operation
			if (oper == '^') { // Check if the number is squared
				num = num*num; // Squares the number
			}
			sum = sum + num; // Add the number to the variable sum
			cin >> oper; // Checks the next operation
			if (oper == ';') { // Checks for end of line
				cout << sum << endl; // Prints sum
				sum = 0; // Resets the sum
				cin >> num; // Saves next number
				cin >> oper; // Checks the next operation
			}
		} else if (oper == '-') { // else if operation is subtraction
			cin >> oper; // Checks the next operation
			if (oper == '^') { // Check if the number is squared
				num = num*num; // Squares the number
			}
			sum = sum - num; // Subtract number
			cin >> oper; // Checks the next operation
			if (oper == ';') { // Checks for end of line
				cout << sum << endl; // Prints sum
				sum = 0; // Resets the sum
				cin >> num; // Saves next number
				cin >> oper; // Checks the next operation
			}
		} else {
			cin >> oper; // Checks the next operation
			if (oper == '^') { // Checs if the number is squared
				num = num*num; // Squares the number
			}
			sum = sum + num; // Otherwise, add number
			cin >> oper; // Checks the next operation
			if (oper == ';') { // Checks for end of line
				cout << sum << endl; // Prints sum
				sum = 0; // Resets the sum
				cin >> num; // Saves next number
				sum = sum + num; // Adds number
				cin >> oper; // Checks the next operation
			}
		}
	}
	return 0; // Returns 0 otherwise
}