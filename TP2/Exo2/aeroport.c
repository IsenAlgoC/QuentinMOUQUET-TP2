#include <stdlib.h>
#include <stdio.h>



main() {
	int Demande = 1;
	float longueur = 0;
	float largeur = 0;
	float hauteur = 0;
	float tmp = 0;
	char letter = "G";
	while (Demande == 1) {
		printf("Entrez la premiere dimensions ");
		scanf_s("%f", &longueur);
		printf("\nEntrez la deuxieme dimensions ");
		scanf_s("%f", &largeur);
		printf("\nEntrez la troisieme dimensions ");
		scanf_s("%f", &hauteur);
		if (largeur > longueur) {
			tmp = longueur;
			longueur = largeur;
			largeur = tmp;
		}
		if (hauteur>longueur){
			tmp = longueur;
			longueur = hauteur;
			hauteur = tmp;
		}
		if (hauteur > largeur) {
			tmp = largeur;
			largeur = hauteur;
			hauteur = tmp;
		}
		if (longueur < 55 && largeur < 35 && hauteur<25) {
			printf("\nLe baggage est valide.");
		}
		else {
			printf("\nLe colis n'est pas valide");
		}
		letter = "G";
		while (letter != "N" || letter != "Y") {
			printf("\nVoulez vous continuez? Y/N");
			scanf_s("%d", &letter);
			printf("\nVous avez entrez %c", letter);
			if (letter == "N") {
				Demande = 0;
			}
			else {
				printf("\nVeuillez entrez Y ou N");
			}
		}
	}
	return EXIT_SUCCESS;
}