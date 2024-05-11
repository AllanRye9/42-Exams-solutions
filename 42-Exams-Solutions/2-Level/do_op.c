// ## Subject

// ```
// Assignment name  : do_op
// Expected files   : *.c, *.h
// Allowed functions: atoi, printf, write
// --------------------------------------------------------------------------------

// Write a program that takes three strings:
// - The first and the third one are representations of base-10 signed integers
//   that fit in an int.
// - The second one is an arithmetic operator chosen from: + - * / %

// The program must display the result of the requested arithmetic operation,
// followed by a newline. If the number of parameters is not 3, the program
// just displays a newline.

// You can assume the string have no mistakes or extraneous characters. Negative
// numbers, in input or output, will have one and only one leading '-'. The
// result of the operation fits in an int.

// Examples:

// $> ./do_op "123" "*" 456 | cat -e
// 56088$
// $> ./do_op "9828" "/" 234 | cat -e
// 42$
// $> ./do_op "1" "+" "-43" | cat -e
// -42$
// $> ./do_op | cat -e
// $
// ```

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main(int ac, char **av)
{
    int i, j, x, sum, sum2;

    sum = 0;
    int a, b, c, d;
    i = 0;
    j = 0;
    x = 0;
    if (ac == 4)
    {
        while(av[1][i])
        {
            if (av[1][i] >= '0' && av[1][i] <= '9')
                sum += atoi(av[i]);
            i++;
        }
            while(av[3][x])
            {
                if (av[1][i] >= '0' && av[1][i] <= '9')
                    sum2 += atoi(av[i]);
                x++;
            }
                while(av[2][j])
                {
                    if (av[2][j] == '+')
                    {
                        a = sum + sum2;
                        printf("%d\n", a);
                    }
                    else if (av[2][j] == '-')
                    {
                        b = sum - sum2;
                        printf("%d\n", b);
                    }
                    else if (av[2][j] == '/')
                    {
                        c = sum / sum2;
                        printf("%d\n", c);
                    }
                    else if (av[2][j] == '*')
                    {
                        d = sum * sum2;
                        printf("%d\n", d);
                    }
                    else
                        write(1, &av[2][j], 1);
                    j++;
                }
    }
    write(1, "\n", 1);
}