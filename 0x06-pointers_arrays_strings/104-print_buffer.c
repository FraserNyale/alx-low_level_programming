#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
				 *(b + i + x) <= 126)
				printf("%c", *(b + i + x));

			else
				printf(".");
		}

		if (x >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
