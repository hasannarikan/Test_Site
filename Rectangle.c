#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//Rectangle
int main(void)
{
	while (true)
	{
		unsigned int n;
		printf_s("%s", "Please enter the value n (n>2): ");
		scanf_s("%u", &n);
		if (n < 2) { printf("\nYou can't define n lesser than 2\n"); return false; }
		char star = '*';
		char empty[200] = " ";
		for (unsigned int k = 1; k <= n - 3; k++)
		{
			strcat_s(empty, " ");
		}


		for (unsigned int i = 1; i <= n; i++)
		{
			if (i == 1 || i == n)
			{
				printf("\n");
				for (unsigned int j = 1; j <= n; j++)
				{
					printf("%c", star);
				}

			}
			else
			{
				printf("\n%c%s%c", star, empty, star);
			}
		}
		printf_s("\nWrite 0 to close program.\n");
	}
	return 0;
}
