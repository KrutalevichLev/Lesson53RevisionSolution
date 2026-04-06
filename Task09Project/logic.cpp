// Task 09 [The sum VI]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму цифр заданного числа, кратных 5

//O(N)
int sum_digits_multiple_of_5(int number) {
    number = (number < 0) ? -number : number;


    if (number == 0) {
        return 0;
    }

    int last_digit = number % 10;

  
    int add = last_digit % 5 != 0 ? 0 : last_digit;

    return add + sum_digits_multiple_of_5(number / 10);
}
