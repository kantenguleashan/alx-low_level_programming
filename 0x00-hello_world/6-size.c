#include <stdio.h>
/*The main function*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an long: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}