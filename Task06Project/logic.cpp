// Task 06 [The sum III]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чётных чисел от 1 до N.
#include "logic.h"

//O(N)
int sum(int number) {
	int count = 0;
	if (number == 1 || number == 0) {
		return 0;
	}
	if (number < 0) {
		return -1;
	}
	number = number % 2 != 0 ? number - 1 : number;

	return number + sum(number - 2);

}

