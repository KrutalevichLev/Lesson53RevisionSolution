#include "logic.h"
//O(N)
int sum(int number) {
	int count = 0;
	if (number < 0) {
		return -1;
	}
	if (number == 0) {
		return 0;
	}

	if (number > 0) {
		return number + sum(number - 1);
	}
}

