#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hauteur;
	char symbole;

	do
	{
		printf("Entrer le symbole à dessiner: ");
		scanf("%c", &symbole);
		if (symbole != '+' && symbole != '-' && symbole != '*' && symbole != '^' && symbole != '$')
		{
			printf("Ce type de symbole n'est pas accépté\n");
		}
	} while (symbole != '+' && symbole != '-' && symbole != '*' && symbole != '^' && symbole != '$');

	do
	{
		printf("Entrer la hauteur du sablier: ");
		scanf("%d", &hauteur);
		if (hauteur <= 0)
		{
			printf("Erreur ! la hauteur doit être positif\n");
		}
	} while (hauteur <= 0);
	
	int milieu = hauteur % 2 != 0 ? (hauteur / 2) + 1 : hauteur / 2;
	int nbCar = hauteur;
	int nbEsp = 0;

	for (int j = 1; j <= milieu; ++j)
	{
		for (int i = 1; i <= nbEsp; ++i)
		{
			printf(" ");
		}
		for (int i = 1; i <= nbCar; ++i)
		{
			printf("%c", symbole);
		}
		printf("\n");
		nbEsp++;
		nbCar -= 2;
	}
	
	nbCar = hauteur % 2 != 0 ? 1 : 2;
	nbEsp = milieu - 1;

	for (int j = milieu; j < hauteur; ++j)
	{
		for (int i = 1; i <= nbEsp; ++i)
		{
			printf(" ");
		}
		for (int i = 1; i <= nbCar; ++i)
		{
			printf("%c", symbole);
		}
		printf("\n");
		nbEsp--;
		nbCar += 2;
	}

	return 0;
}