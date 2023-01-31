#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N, i, j, k, div;

	do {
		printf("Entrer un nombre positif: ");
		scanf("%d", &N);
		if (N <= 0)
		{
			printf("Entrée invalide !\n");
		}
	} while(N <= 0);

	j = 1, i = 1;

	printf("Les %d premiers nombres premiers sont: \n", N);
	do
	{
		do
		{
			div = 0;
			for (k = 1; k <= j; ++k)
			{
				if (j % k == 0)
				{
					div++;
				}
			}

			if (div == 2)
			{
				printf("%d est premier\n", j);
				i++;
			}
			j++;
		} while (i <= N);
	} while (i <= N);

	return 0;
}