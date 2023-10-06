//-- commentaire basique 

/* commentaire sur 
   deux ligne */

#include <stdio.h>
#include "MesFonctions.h"




// fonction main -> point d'entreé 
void main()
{
	//-- déclaration variable 
	int resultat;		// pour la sortie fct addition 
	int val1 = 1, val2 = 2, val3 = 5;		// valeur entree fct addition 
	char car = 'A'; 

	// -- initialiation 
	val1 = val2 +1 + val3; 


	//appel de fonction 
	printf("hello SLO 1"); // affichage d'une chaine de caractère 
	printf("%c", car);
	//printf('A');    // putc / putchar ; 

	//appel de la fct addition 
	// int AdditionnerDeuxValeurs(int valeur1, int valeur2); 
	resultat = AdditionnerDeuxValeurs(val1, val2);



}