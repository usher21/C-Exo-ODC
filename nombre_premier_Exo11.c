#include <stdio.h>

int main()
{
	int div = 0, N;

	do
	{
		printf("Entrer un nombre: ");
		scanf("%d", &N);
		if (N <= 0)
		{
			printf("Erreur !! Le nombre doit être positif\n");
		}
	} while (N <= 0);

	for (int i = 1; i <= N; ++i)
	{
		if (N % i == 0)
		{
			div++;
		}
	}

	if (div == 2)
	{
		printf("%d est un nombre premier\n", N);
	} else {
		printf("%d n'est pas un nombre premier\n", N);
	}

	return 0;
}