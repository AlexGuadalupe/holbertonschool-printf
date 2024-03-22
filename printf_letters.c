#include "main.h"
/**
 * printf_letters - Print a string with putchar.
 * @str: The string to print.
 *
 * Return: The number of characters printed.
 */
int printf_letters(char *str)
{
int count = 0;

while (*str)
{
if (*(str + 1) == '\0')
{
putchar(*str);
break;
}
else
{
putchar(*str);
str++;
count++;
}
return (count +1);
}
