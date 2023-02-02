#include <stdio.h>

int main(int argc, char const *argv[])
{
	int nombre, nombre_precedent, nombre_courrant, sequence = 0, plusLongSequence = 1, nombreSequence = 0, position = 0, i;

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
	i = 1;
	sequence = 1;

	while(i < nombre) {
		do {
			printf("Entrer un nombre entre 1 et 100: ");
			scanf("%d", &nombre_courrant);
			if (nombre_courrant < 1 || nombre_courrant > 100)
			{
				printf("le nombre doit être compris entre 1 et 100\n");
			}
		} while(nombre_courrant < 1 || nombre_courrant > 100);
		i++;

		/*printf("nombre_courrant = %d, sequence = %d\n", nombre_courrant, sequence);*/
		
		if (nombre_courrant > nombre_precedent)
		{
			sequence += 1;
			
		} else {
			if (sequence > plusLongSequence)
			{
				plusLongSequence = sequence;
				position = i - sequence;

			}
			sequence = 1;
		}

		nombre_precedent = nombre_courrant;
	}

	if (sequence > plusLongSequence)
	{
		plusLongSequence = sequence;
	}

	printf("La plus longue séquence: %d\n", plusLongSequence);
	printf("La position du premier élément de cette séquence: %d\n", position);

	return 0;
}
