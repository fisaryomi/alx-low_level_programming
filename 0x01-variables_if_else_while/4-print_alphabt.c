#include <stdio.h>

/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Return: 0 on Success
 *
 *     */

int main(void)

{

		char letter = 'a';



			for (; letter <= 'z'; letter++)

					{

								if (letter != 'e' && letter != 'q')

												putchar(letter);

										if (letter == 'z')

														putchar('\n');

											}

				return (0);

}
