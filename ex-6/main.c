#include <stdio.h>

int main()
{
	char prenom[100];
	int age;

	printf("Bonjour, quel est votre prénom ?\n");
	scanf("%99s", prenom);
	printf("Bonjour %s, quel est votre âge ?\n", prenom);
	scanf("%d", &age);
	printf("%s, si vous êtes de la fin d'année, votre année de naissance est %d sinon c'est %d\n",
	       prenom, 2026 - age - 1, 2026 - age);
	return 0;
}
