#include <stdio.h>
#include <time.h>

int main()
{
	char prenom[100];
	int age;
	
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	int current_year = tm.tm_year + 1900;

	printf("Bonjour, quel est votre prenom ?\n");
	scanf("%99s", prenom);
	printf("Bonjour %s, quel est votre age ?\n", prenom);
	scanf("%d", &age);
	printf("%s, si vous etes de la fin d'annee, votre annee de naissance est %d sinon c'est %d\n",
	       prenom, current_year - age - 1, current_year - age);
	return 0;
}
