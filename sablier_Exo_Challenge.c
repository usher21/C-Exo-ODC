#include <stdio.h>

void color(int param) {
	printf("\033[%dm", param);
}

int main(int argc, char const *argv[])
{
	int hauteur, nombreCaractere, nombreEspace;
	char symbole;

	do
	{
		printf("Entrer le symbole à dessiner: ");
		scanf("%c", &symbole);
		if (symbole != '+' && symbole != '0' && symbole != '*' && symbole != '^' && symbole != '$')
		{
			printf("Ce type de symbole n'est pas accépté\n");
		}
	} while (symbole != '+' && symbole != '0' && symbole != '*' && symbole != '^' && symbole != '$');

	do
	{
		printf("Entrer la hauteur du sablier: ");
		scanf("%d", &hauteur);
		if (hauteur <= 0)
		{
			printf("Erreur ! la hauteur doit être positif\n");
		}
	} while (hauteur <= 0);
	
	nombreCaractere = hauteur + (hauteur - 1);
	nombreEspace = 0;

	for (int j = 1; j <= hauteur; ++j)
	{
		for (int i = 1; i <= nombreEspace; ++i)
		{
			printf(" ");
		}
		for (int i = 1; i <= nombreCaractere; ++i)
		{
			printf("\033[34m%c", symbole);
		}
		printf("\n");
		nombreEspace++;
		nombreCaractere -= 2;
	}
	
	nombreCaractere = 3;
	nombreEspace = hauteur - 2;

	for (int j = 1; j < hauteur; ++j)
	{
		for (int i = 1; i <= nombreEspace; ++i)
		{
			printf(" ");
		}
		for (int i = 1; i <= nombreCaractere; ++i)
		{
			printf("\033[32m%c", symbole);
		}
		printf("\n");
		nombreEspace--;
		nombreCaractere += 2;
	}

	return 0;
}