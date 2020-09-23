#include <stdlib.h>
#include <stdio.h>



main() {
	int Demande = 1;
	float longueur = 0;
	float largeur = 0;
	float hauteur = 0;
	float tmp = 0;
	char letter = "N";
	while (Demande == 1) {
		printf("Entrez la premiere dimensions ");
		scanf_s("%f", &longueur);
		rintf("\nEntrez la deuxieme dimensions ");
		scanf_s("%f", &largeur);
		rintf("\nEntrez la troisieme dimensions ");
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
		printf("\nVoulez vous continuez? Y/N");
		scanf_s("%c", &letter);
		if (letter == "N")
	}
}