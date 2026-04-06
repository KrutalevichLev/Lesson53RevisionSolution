#include "logic.h"

int main() {
	int number;
	cout << "Enter your number: ";
	cin >> number;
	
	long long result = sum_of_cubes(number);

	cout << "Your sum of cubes is " << result;
	return 0;
}