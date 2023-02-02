#include <stdio.h>

int main(void)
{
	int prix, somme = 0, i = 1;

	do
	{
		do
		{
			printf("Entrer le prix de l'article %d: ", i);
			scanf("%d", &prix);
			if (prix < 0)
			{
				printf("Entrée invalide !! le prix de l'article doit être positif\n");
			} else {
				i++;
				somme += prix;
			}
		} while (prix < 0);
	} while (prix != 0);

	if (somme != 0)
	{
		printf("La sommme des prix des articles est: %d FCFA\n", somme);
	}
	
	return 0;
}