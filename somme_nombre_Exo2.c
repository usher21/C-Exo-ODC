#include <stdio.h>

int main(void)
{
	int nombre, somme = 0, i;
	float moyenne;

	do
	{
		printf("Entrer un nombre: ");
		scanf("%d", &nombre);
		if (nombre <= 0)
		{
			printf("Entrée invalide !! le nombre doit être positif\n");
		}
	} while (nombre <= 0);

	i = 1;

	while(i <= nombre) {
		somme += i;
		i++;
	}

	printf("La somme des entiers jusqu'à %d est: %d\n", nombre,somme);

	i = 1;
	somme = 0;

	while(i <= nombre) {
		somme += i;
		moyenne = somme/i;
		i++;
	}

	moyenne = (float)somme/(float)nombre;
	printf("La moyenne des entiers jusqu'à %d est: %.2f\n", nombre, moyenne);

	return 0;
}