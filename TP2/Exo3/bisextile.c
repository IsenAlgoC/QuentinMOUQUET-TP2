#include <stdlib.h>
#include <stdio.h>

main() {
	int annee = 10001;
	while (annee > 10000) {
		printf("\nEntrez une année ");
		scanf_s("%d", &annee);
	}
	if (annee % 4 == 0) {
		if (annee % 100 == 0) {
			if (annee % 400 == 0) {
				printf("\n%d est bisextile", annee);
			}
			else {
				printf("\n%d n'est pas bisextile", annee);
			}
		}
		else {
			printf("\n%d est bisextile", annee);
		}
	}
	else {
		printf("\n%d n'est pas bisextile", annee);
	}
}