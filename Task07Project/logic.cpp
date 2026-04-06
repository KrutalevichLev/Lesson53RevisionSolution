// Task 07 [The number of odd digits]
// Количество нечётных цифр
//
// Необходимо спроектировать и реализовать программу, 
// которая считает количество нечётных цифр
// в заданном целом числе.

//0(logN)
int count_of_odd_digits(int number) {
	number = number < 0 ? -number : number;

	if (number == 0 || number == 10) {
		return 0;
	}
	int last_digit = number % 10;

	int counter = last_digit % 2 != 0 ? 1 : 0;

	return counter + count_of_odd_digits(number / 10);
}