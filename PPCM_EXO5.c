#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 0, b = 0, ppcm;

	do
	{
		printf("Entrer le premier nombre: ");
		scanf("%d", &a);
		if (a <= 0)
		{
			printf("Entrée invalide !! le nombre doit être positif\n");
		}
	} while (a <= 0);

	do
	{
		printf("Entrer le second nombre: ");
		scanf("%d", &b);
		if (b <= 0)
		{
			printf("Entrée invalide !! le nombre doit être positif\n");
		}
	} while (b <= 0);

	if (a > b)
	{
		ppcm = a;
	} else {
		ppcm = b;
	}

	while(!((ppcm % a) == 0 && (ppcm % b) == 0)) {
		++ppcm;
	}

	printf("Le PPCM de %d et %d = %d\n", a, b, ppcm);

	return 0;
}