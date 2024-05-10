// Assignment name  : fizzbuzz
// Expected files   : fizzbuzz.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that prints the numbers from 1 to 100, each separated by a
// newline.

// If the number is a multiple of 3, it prints 'fizz' instead.

// If the number is a multiple of 5, it prints 'buzz' instead.

// If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

// Example:

// $>./fizzbuzz
// 1
// 2
// fizz
// 4
// buzz
// fizz
// 7
// 8
// fizz
// buzz
// 11
// fizz
// 13
// 14
// fizzbuzz
// [...]
// 97
// 98
// fizz
// buzz
// $>

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void convert_to_strings(int num)
{
    char arr[10] = "0123456789";
    if (num > 9)
        convert_to_strings(num / 10);
    write(1, &arr[num % 10], 1);
}

int main() {
    int num = 1;
    
    while (num <= 100) {
        if (num % 3 == 0 && num % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (num % 3 == 0)
            write(1, "fizz", 4);
        else if (num % 5 == 0)
            write(1, "buzz", 4);
        else {
            convert_to_strings(num); 
        }
        write(1, "\n", 1);
        num++;
    }
}
