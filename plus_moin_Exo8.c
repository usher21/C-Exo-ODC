#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n1 = 0, n2 = 0, tentatives = 0;

	printf("Entrer un nombre à déviner: ");
	scanf("%d", &n1);

	do {
		tentatives++;

		printf("Déviner le nombre: ");
		scanf("%d", &n2);

		if (n2 < n1)
		{
			printf("Plus grand\n");
		} else if (n2 > n1)
		{
			printf("Plus petit\n");
		} else {
			printf("Bravo vous avez déviner le nombre\n");
			printf("Score: %d\n", tentatives);
		}
	} while(n2 != n1);

	return 0;
}