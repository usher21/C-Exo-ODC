#include <stdio.h>

int main(int argc, char const *argv[])
{
	int nombre = 0, somme = 0;

	do
	{
		printf("Entrer un nombre: ");
		scanf("%d", &nombre);
		if (nombre <= 0)
		{
			printf("Erreur ! le nombre doit être positif\n");
		}
	} while (nombre <= 0);

	for (int i = 1; i < nombre; ++i)
	{
		if (nombre % i == 0)
		{
			somme += i;
		}
	}

	if (somme == nombre)
	{
		printf("%d est un nombre parfait\n", nombre);
	} else {
		printf("%d n'est pas un nombre parfait\n", nombre);
	}

	return 0;
}