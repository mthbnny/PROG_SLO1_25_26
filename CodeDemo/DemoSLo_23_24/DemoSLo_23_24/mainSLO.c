//-----------------------------------------------------------------------------------//
// Nom du projet 		: DemoSlo23_24
// Nom du fichier 		: mainSLO.c
// Date de création 	: 21.09.2023
// Date de modification : 12.10.2023
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : fichier source démo SLO
//
// Remarques 			: lien pour la table ASCII :	-> http://www.asciitable.com/
//						  lien pour la fct sizeof : 	-> https://www.geeksforgeeks.org/sizeof-operator-c/
//						  								ATTENTION -> sizeof est une fct, elle retourne quelque chose 
//						
// Théorie 				: voir les chapitres 1 / 2 / 3 / 4 / 5
//----------------------------------------------------------------------------------//
//-- délcaration des libraires systèmes --// 
#include <stdio.h>				// lib standard pour les entrée sortie 
#include <stdint.h> 			// lib standard sur les entiers 

//-- déclaration des librairies personnelles --// 
#include "MesFonctions.h"

//-- déclaration globale d'une énumération (type) => vision uniquement dans ce source --// 
enum e_Etat1 {INIT = 10, EXECUT = 100, WAIT}; 

// fonction main -> point d'entreé 
void main()
{
	
	//-- déclaration variable 
	int resultat;		// pour la sortie fct addition 
	int val1 = 1, val2 = 2, val3 = 5;		// valeur entree fct addition 
	char car = 'A'; 

	// utilisation d'énumération avec initialiation
	enum e_Etat1 maMachineEtat = INIT; 
	e_Etat2 maMachineEtat2 = IDLE; 
	
	int8_t demo = 7;  // écriture en hexa 0x0A; 0xA;  0xFA 
					  // écriture en octal 07 
					  // écriture en binaire : 0b1010  
	
	float demo2 = 3.14; 
	
	resultat = sizeof(demo);  // paramètre d'entrée -> nom d'une variable / constante ; une constante numérioque ; un type 

	// -- initialiation 
	val1 = val2 +1 + val3; 


	//appel de fonction 
	printf("hello SLO 1"); // affichage d'une chaine de caractère 
	printf("%c", car);
	//printf('A');    // putc / putchar ; 

	//appel de la fct addition 
	// int AdditionnerDeuxValeurs(int valeur1, int valeur2); 
	resultat = AdditionnerDeuxValeurs(val1, val2);

	// condition ou test 
	if(val1 != val2) { /* instruction */ }  // ATTENTION A NE PAS FAIRE 
	
	if(val1 != val2) 
	{
		if(maMachineEtat == EXECUT)
		{
			
		}
	
	
	
	// condition 1 -> testée -> si fausse -> condition 2 
	// -> si vrai uniquement condition 1 
	if(val1 != val2)
	{
		val3 = val1; 
	}
	// condition 2 -> si fausee -> condsition 3 
	if else (val1 <= val2)
	{
		val2 = val3; 
	}
	// condition 3-> 
	else 
	{
		val3 = val2; 
	}

	if(val1 != val2)
		val3 = val1; 

	if (val1 <= val2)
		val2 = val3; 

	if((val1 != val2) && (val1 <= val2))
	{
		
	}

	//-- structure d'une machine d'état 
	switch(maMachineEtat)
	{
		case INIT: 
			break; 
			
		case EXECUT: 
			break; 	
		
		case WAIT: 
			break; 		

		default :
			break; 
	}
}