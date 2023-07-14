#include <stdio.h>
/**
 * main - prints numbers fillowing by a new line
 *
 * Return: 0.
 */
int main(void)
{
	int i = 0, j;

	while (i <= 3)
	{
		j = 0;
		while (j <= 6)
		{
			printf("3 ");
			j++;
		}
		printf("3\n");
		i++;
	}
	return (0);
}
