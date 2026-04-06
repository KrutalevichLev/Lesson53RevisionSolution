#include "logic.h"

long long sum_of_cubes(int number) {
	if (number < 0) {
		return number;
	}
	if (number == 0) {
		return 0;
	}
	return number * number * number + sum_of_cubes(number - 1);
}