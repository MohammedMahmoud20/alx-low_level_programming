#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int byts, d;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byts = atoi(argv[1]);

	if (byts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (d = 0; d < byts; d++)
	{
		if (d == byts - 1)
		{
			printf("%02hhx\n", arr[d]);
			break;
		}
		printf("%02hhx ", arr[d]);
	}
	return (0);
}
