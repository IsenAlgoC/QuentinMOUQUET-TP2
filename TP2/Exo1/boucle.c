#include <stdlib.h>
#include <stdio.h>

main() {
	int n = 100;
	int curseur = 1;
	int somme = 0;
	for (curseur = 1; curseur <= n; curseur++) {
		somme = somme + curseur;
	}
	printf("La somme des premiers entiers jusqu'a %d est de %d", n, somme);
}