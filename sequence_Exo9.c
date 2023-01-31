#include <stdio.h>

int main(int argc, char const *argv[])
{
	int nombre, nombre_precedent, nombre_courrant, plusLongSequence = 1, sequence = 0, position = 0, i;

	do {
		printf("Entrer un nombre entre 10 et 50: ");
		scanf("%d", &nombre);
		if (nombre < 10 || nombre > 50)
		{
			printf("le nombre doit être compris entre 10 et 50\n");
		}
	} while(nombre < 10 || nombre > 50);

	do {
		printf("Entrer un nombre entre 1 et 100: ");
		scanf("%d", &nombre_precedent);
		if (nombre_precedent < 1 || nombre_precedent > 100)
		{
			printf("le nombre doit être compris entre 1 et 100\n");
		}
	} while(nombre_precedent < 1 || nombre_precedent > 100);

	sequence = 1;

	for (int i = 1; i < nombre; ++i)
	{
		do {
			printf("Entrer un nombre entre 1 et 100: ");
			scanf("%d", &nombre_courrant);
			if (nombre_courrant < 1 || nombre_courrant > 100)
			{
				printf("le nombre doit être compris entre 1 et 100\n");
			}
		} while(nombre_courrant < 1 || nombre_courrant > 100);
		
		if (nombre_courrant >= nombre_precedent)
		{
			sequence++;
			nombre_precedent = nombre_courrant;
		} else {
			if (sequence > plusLongSequence)
			{
				plusLongSequence = sequence;
				position = i - sequence;
			}
			sequence = 1;
		}
	}

	printf("La plus longue séquence: %d\n", plusLongSequence);
	printf("La position du premier élément de cette séquence: %d\n", position + 1);

	return 0;
}