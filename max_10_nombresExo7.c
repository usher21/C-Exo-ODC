#include <stdio.h>

int main(void)
{
	int nombre, max, rang;

	for (int i = 1; i <= 10; ++i)
	{
		printf("Entrer un nombre: ");
		scanf("%d", &nombre);

		if (i == 1)
		{
			max = nombre;
			rang = 1;
		} else {
			if (nombre > max)
			{
				max = nombre;
				rang = i;
			}
		}
	}

	printf("Le plus grand parmis ces nombres est: %d\n", max);
	printf("Son rang est: %d\n", rang);

	return 0;
}
