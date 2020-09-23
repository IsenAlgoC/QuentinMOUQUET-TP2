#include <stdlib.h>
#include <stdio.h>

main() {
	unsigned short int n = 100;
	unsigned short int curseur1 = 1;
	unsigned short int somme1 = 0;
	unsigned short int curseur2 = 1;
	unsigned short int somme2 = 0;
	unsigned short int curseur3 = 1;
	unsigned short int somme3 = 0;


	//Partie1

	for (curseur1 = 1; curseur1 <= n; curseur1++) {
		somme1 = somme1 + curseur1;
	}
	printf("La somme des premiers entiers jusqu'a n=%d est de %d (en boucle For).\n", n, somme1);

	while (curseur2 <= n) {
		somme2 = somme2 + curseur2;
		curseur2 = curseur2 + 1;
	}
	printf("La somme des premiers entiers jusqu'a n=%d est de %d (en boucle While).\n", n, somme2);

	do {
		somme3 = somme3 + curseur3;
		curseur3 = curseur3 + 1;
	} while (!(curseur3 <= n));
	printf("La somme des premiers entiers jusqu'a n=%d est de %d (en boucle Do While).\n", n, somme2);



	printf("\n");

	//Partie2

	unsigned short int somme = 0;
	unsigned short int curseur = 1;
	while (65535 - somme >= curseur) {
		somme = somme + curseur;
		curseur = curseur + 1;
	}
	printf("n peut prendre %d en valeur maximale pour eviter un depassement de memoire.\nOn atteind alors la somme de %d.\n\n", curseur - 1,somme);
	unsigned short int valeurMax = curseur - 1;

	//Partie 3 et 4

	somme = 0;
	short int nValide = 0;
	while (nValide == 0) {
		printf("Entrez une valeur de n ");
		scanf_s("%hu", &n);
		if (n <= valeurMax && n > 0) {
			nValide = 1;
		}
		else {
			printf("La valeur depasse la valeur max veuillez entrez un nombre entre 0 et %hu\n", valeurMax);
		}
	}
		
	
	
	for (curseur = 1; curseur <= n; curseur++) {
		somme = somme + curseur;
	}
	printf("La somme des premiers entiers jusqu'a n=%d est de %d.\n", n, somme);

	return EXIT_SUCCESS;
}