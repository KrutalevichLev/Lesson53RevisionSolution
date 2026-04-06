// Task 03 [The sum II]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от N до M.

#include "logic.h"
//O(N - M)
int sum(int n, int m) {
	if (m > n) {
		int temp = m;
		m = n;
		n = temp;
	}
	if (n == m) {
		return m;
	}

	return n + sum(n - 1, m);
}
