#include <stdlib.h>
#include <stdio.h>

main() {
	srand(time(NULL));
	int nombre = rand() % 100;
	int guess = -1;
	int score = 0;
	while (guess != nombre) {
		score = score + 1;
		printf("\nEntrez un nombre");
		scanf_s("%d", &guess);
		if (guess < nombre) {
			printf("\nPlus grand");
		}
		if (guess > nombre) {
			printf("\nPlus petit");
		}
	}
	printf("Bravo!!! score = %d", score);
	return EXIT_SUCCESS;
}