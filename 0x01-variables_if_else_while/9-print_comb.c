#include <stdio.h>

/**
 *main - prints all possible combinations of single-digit numbers
 *Numbers must be separated by ,, followed by a space
 *Return: 0
 */
int main(void)
{
int num = '0';

while (num <= '9')
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
