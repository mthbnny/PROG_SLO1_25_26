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
#include "demo.h"

//-- déclaration globale d'une énumération (type) => vision uniquement dans ce source --// 
enum e_Etat1 {INIT = 10, EXECUT = 100, WAIT}; 

//-- déclaration d'une structure globale uniquement par rapport au fichier main.c 
struct str_demoStructure 
{
	char valC; 
	short dataNum; 
	int tbExEntier[5]; 
	float datareel; 
}; 


// fonction main -> point d'entreé 
void main()
{
	//-- déclaration variable 
	int resultat;		// pour la sortie fct addition 
	int val1 = 1, val2 = 2, val3 = 5;		// valeur entree fct addition
	int x, y; 
	
	char tbXY[2][3] = {{0, 0, 0},
					   {0, 0, 0}}; 
	
	char car = 'A'; 
	char demoChar = 0; 
	short tbDemo[2] = { 0, 0 };        	// char tbDemo[4]; 			// tableau de 4 octets => long tbDemo[1]; 
	short tbDemo1[] = {0, 0, 0}; 		// taille en octet 3 x 2 octets => 6 octets 
	//short tbDemo1[10] = {0, 0, 0}; 		// taille tableau 10 x 2 octets => 20 octets -> initialisation des 3 premières valeurs 
	short tbDemo2[100] = { 0 }; 		// Normalement toutes les casses sont à zéro. 
	
	//-- déclaration pointeur --// 
	short *ptTableau; 
	
	//-- déclaration d'une variable de type struct 
	// struct type_de_la_structure_a_utiliser variable_de_la_structure 
	struct str_demoStructure maStructure; 
	
	str_demo4 maStructureImbriquee; 
	
	// accès à l'adresse la première case tableau 
	ptTableau = &tbDemo2[0]; 	
	ptTableau = &tbDemo2[4]; 			// ptTableau = ptTableau + 4; 	ptTableau += 4; 
	
	tbDemo2[0] = 0;  
	tbDemo2[1] = 0;
	
	// accès à la structure 
	maStructure.valC = 'A'; 
	maStructure.tbExEntier[4] = 42; 
	
	tbDemo[0] = maStructure.dataNum; 
	
	maStructureImbriquee.A1.A = 'a'; 
	maStructureImbriquee.A1.B = 100; 

	// maStructureImbriquee.A1 = { 'a', 1, 2 }; // , 'b', 3, 4


	//-- itération -> boucle for : connaitre le nombre de cases --// 
	for(val1 = 0; val1 < NB_CASE_TB; val1++)
	{
		tbDemo2[val1] = 0; 
	}
	
	for(x = 0, y = 0 ; x < 3; x++)
	{
		for(; y < 2; y++) 
		{
			tbXY[y][x] = 10; 
		}
	}
	
	
	// utilisation d'énumération avec initialiation
	enum e_Etat1 maMachineEtat = INIT; 
	e_Etat2 maMachineEtat2 = IDLE; 
	
	int8_t demo = 7;  // écriture en hexa 0x0A; 0xA;  0xFA 
					  // écriture en octal 07 
					  // écriture en binaire : 0b1010  
	
	//float demo2 = 3.14; 
	
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
	}
	
	
	// condition 1 -> testée -> si fausse -> condition 2 
	// -> si vrai uniquement condition 1 
	if(val1 != val2)
	{
		val3 = val1; 
	}
	// condition 2 -> si fausee -> condsition 3 
	else if (val1 <= val2)
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
	
	
	
	//-- appel de fct avec un pointeur
	FctDATA(&tbDemo[0], val1);   // a remplacer 10 par une variable ou define 
}