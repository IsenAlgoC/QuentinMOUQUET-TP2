#include <stdlib.h>
#include <stdio.h>

main() {
	unsigned short int n = 100;
	unsigned short int curseur = 1;
	unsigned short int somme = 0;
	for (curseur = 1; curseur <= n; curseur++) {
		somme = somme + curseur;
	}
	printf("La somme des premiers entiers jusqu'a n=%d est de %d.\n", n, somme);
	somme = 0;
	curseur = 1;
	while (65535 - somme >= curseur) {
		somme = somme + curseur;
		curseur = curseur + 1;
	}
	printf("n peut prendre %d en valeur maximale pour eviter un depassement de memoire.\nOn atteind alors la somme de %d.\n\n", curseur - 1,somme);
	somme = 0;
	printf("Entrez une valeur de n ");
	scanf_s("%hu", &n);
	for (curseur = 1; curseur <= n; curseur++) {
		somme = somme + curseur;
	}
	printf("La somme des premiers entiers jusqu'a n=%d est de %d.\n", n, somme);
}