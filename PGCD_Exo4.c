#include <stdio.h>

int main(void)
{
	int a, b, pgcd, c, d;

	do
	{
		printf("Entrer un nombre: ");
		scanf("%d", &a);
		if (a <= 0)
		{
			printf("Entrée invalide !! le nombre doit être positif\n");
		}
	} while (a <= 0);

	do
	{
		printf("Entrer un autre nombre: ");
		scanf("%d", &b);
		if (b <= 0)
		{
			printf("Entrée invalide !! le nombre doit être positif\n");
		}
	} while (b <= 0);

	c = a;
	d = b;

	while(c != d) {
		if (c > d)
		{
			c -= d;
		} else {
			d -= c;
		}
	}

	pgcd = c;

	printf("Le PGCD de %d et %d est %d\n", a, b, pgcd);

	return 0;
}