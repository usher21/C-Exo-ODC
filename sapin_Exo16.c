#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hauteurFeuille, hauteurTronc, largeurRacine;
	char symbole;

	do
	{
		printf("Entrer le symbole: ");
		scanf("%c", &symbole);
		if (symbole != '+' && symbole != '$' && symbole != '0' && symbole != '*')
		{
			printf("Ce type de symbole n'est pas accépté\n");
		}
	} while (symbole != '+' && symbole != '$' && symbole != '0' && symbole != '*');

	do
	{
		printf("Donner la hauteur des feuilles: ");
		scanf("%d", &hauteurFeuille);
		if (hauteurFeuille <= 0)
		{
			printf("Erreur !! entrée invalide la hauteur des feuilles doit être positif\n");
		}
	} while (hauteurFeuille <= 0);

	do
	{
		printf("Donner la hauteur deu tronc: ");
		scanf("%d", &hauteurTronc);
		if (hauteurTronc <= 0)
		{
			printf("Erreur !! entrée invalide la hauteur du tronc doit être positif\n");
		}
	} while (hauteurTronc <= 0);

	do
	{
		printf("Donner la largeur de la racine: ");
		scanf("%d", &largeurRacine);
		if (largeurRacine == 1 || largeurRacine % 2 == 0)
		{
			printf("Erreur !! entrée invalide la largeur de la racine doit être positif\n");
		}
	} while (largeurRacine == 1 || largeurRacine % 2 == 0);

	int sym = 1;

	for (int i = 1; i <= hauteurFeuille; ++i)
	{
		for (int j = 1; j <= hauteurFeuille - i; ++j)
		{
			printf(" ");	
		}
		for (int j = 1; j <= sym; ++j)
		{
			printf("%c", symbole);
		}
		printf("\n");
		sym += 2;
	}

	for (int j = 1; j <= hauteurTronc; ++j)
	{
		for (int i = 0; i < hauteurFeuille - 1; ++i)
		{
			printf(" ");
		}
		printf("%c\n", symbole);
	}

	int l = hauteurFeuille - 1;
	int s = l - (largeurRacine / 2);

	for (int i = 0; i < s; ++i)
	{
		printf(" ");
	}
	for (int i = 0; i < largeurRacine; ++i)
	{
		printf("%c", symbole);
	}
	printf("\n");

	return 0;
}