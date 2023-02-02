#include <stdio.h>

int main(void)
{
	int N, M, S1 = 0, S2 = 0;

	do
	{
		printf("Entrer un nombre: ");
		scanf("%d", &N);
		if (N <= 0)
		{
			printf("Le nombre doit être positif\n");
		}
	} while (N <= 0);

	do
	{
		printf("Entrer un autre nombre: ");
		scanf("%d", &M);
		if (M <= 0)
		{
			printf("Le nombre doit être positif\n");
		}
	} while (M <= 0);

	for (int i = 2; i < N; ++i)
	{
		if (N % i == 0)
		{
			S1 += i;
			
		}
	}

	for (int i = 2; i < M; ++i)
	{
		if (M % i == 0)
		{
			S2 += i;
			
		}
	}

	if (S1 == M && S2 == N)
	{
		printf("%d et %d sont des nombres amis\n", N, M);
	} else {
		printf("%d et %d ne sont pas des nombres amis\n", N, M);
	}

	return 0;
}