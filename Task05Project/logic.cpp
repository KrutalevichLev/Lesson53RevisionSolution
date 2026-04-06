// Task 05 [The number of digits]
// Количество цифр числа
// 
// Необходимо спроектировать и реализовать программу, 
// которая подсчитывает количество цифр 
// в заданном целом числе.

//O(logN)
int count(int number) {
	if (number == 0) {
		return 1;
	}
	number = number < 0 ? -number : number;

	if (number < 10) {
		return 1;
	}

	return 1 + count(number / 10);
}