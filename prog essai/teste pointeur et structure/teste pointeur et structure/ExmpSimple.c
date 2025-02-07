#include <stdio.h>

/*
Exemple avec une inversion de nombre les pointeurs nous permette de ne pas passer par les returns pour aller chercher les valeur de A et de B
		je travail directement sur l'adresse de la donnée
		les pointeurs permette de modifier les données dans une fonction

	pointeur : variable contenant l'adresse d'une autre variable

	%d -> affiche une adresse de variable ou pointeur

	[VARIABLE]
		maVariable : valeur de la variable
		&maVariable : adresse de la variable

	[POINTEURS]
		*monPointeur = NULL ou *monPointeur = &maVariable
		(déclaration et initialisation d'un pointeur)

		monPointeur : adresse de la variable pointée
		*monPointeur : valeur de la variable pointée
		&monPointeur : adresse du pointeur
*/

void change_nombre(int *pt_nb) {
	
	*pt_nb = 15;
	printf("Adresse pointeur : ",&pt_nb); 
	printf("Adresse pointee : ",pt_nb);
	printf("valeur Adresse pointee : ",*pt_nb);

}

int main(void) {

	int nombre = 0;

	printf("nombre = %d\n", nombre);
	change_nombre(&nombre);
	printf("nombre = %d\n", nombre);

	return 0;

}