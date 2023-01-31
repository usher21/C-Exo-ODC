#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int nombre, nombreEntier = 0, nombreDeNombrePremier = 0;
	bool est_premier;

	do
	{
		do
		{
			printf("Entrer un nombre: ");
			scanf("%d", &nombre);
			if (nombre < 0)
			{
				printf("Erreur le nombre doit être positif\n");
			}
		} while (nombre < 0);

		nombreEntier++;
		
		if (nombre == 0)
			break;

		est_premier = true;

		for (int i = 2; i < nombre; ++i)
		{
			if (nombre % i == 0)
			{
				est_premier = false;
				break;
			}
		}

		if (est_premier && nombre != 1)
		{
			printf("%d est premier\n", nombre);
			nombreDeNombrePremier++;
		}
	} while (nombre != 0);

	printf("\nLe nombre d'entier saisie est: %d\n", nombreEntier--);
	printf("Le nombre de nombre premier est: %d\n", nombreDeNombrePremier);

	return 0;
}