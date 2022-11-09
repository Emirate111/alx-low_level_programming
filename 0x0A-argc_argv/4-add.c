#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
/*Declaring variables*/
unsigned int count;
count = 0;
while (count < strlen(str)) /*count string*/
{
if (!isdigit(str[count])) /*check if str there are digit*/
{
return (0);
}
count++;
}
/**
 * main - Print the name of the progrr
