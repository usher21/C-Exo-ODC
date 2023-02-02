#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 0, b = 0, i = 0, div = 0;

	do
	{
		printf("Entrer un nombre: ");
		scanf("%d", &a);
		if (a <= 0)
		{
			printf("Entrée invalide !! le nombre doit être positif\n");
		}
	} while (a <= 0);

	div = a;

	do
	{
		printf("Entrer un autre nombre: ");
		scanf("%d", &b);
		if (b <= 0)
		{
			printf("Entrée invalide !! le nombre doit être positif\n");
		} else if(b > a) {
			printf("le deuxième nombre ne peut être supérieure au premier\n");
		}
	} while (b <= 0 || b > a);
	
	while(div >= b) {
		div -= b;
		i++;
	}

	printf("%d / %d = %d\n", a, b, i);

	return 0;
}