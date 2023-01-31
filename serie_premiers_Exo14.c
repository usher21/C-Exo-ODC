#include <stdio.h>

int main(int argc, char const *argv[])
{
	int  N = 0, div = 0;

	do {
		printf("Entrer un nombre positif: ");
		scanf("%d", &N);
		if (N <= 0)
		{
			printf("Entrée invalide !\n");
		}
	} while(N <= 0);

	int i = 1, j = 1;

	for (i = 1; i <= N; ++i)
	{
		div = 0;
		for (j = 1; j <= i; ++j)
		{
			if (i % j == 0)
			{
				div++;
			}
		}

		if (div == 2)
		{
			printf("%d est un nombre premier\n", i);
		}
	}

	return 0;
}