#include <iostream>
using namespace std;

int main() { // Creating main function
	int file; // Declaring integer variable named file
	int sum = 0; // Declaring integer variable named sum with a value of 0
	while (cin >> file) { // Runs through while loop that reads into the numbers.txt file
		sum += file; // Adds the numbers as it reads through the file
	} // Ends while loop
	cout << sum << endl; // Prints the value of the sum
} // Ends main function