//-----------------------------------------------------------------------------------//
// Nom du projet 		: Demo25_26
// Nom du fichier 		: demo.c
// Date de création 	: 29.09.2025
// Date de modification : xx.xx.20xx
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : demo pour SLO1 25-26
//
//
// Remarques :            
//----------------------------------------------------------------------------------//
//-- librairie standard --// 
#include <stdio.h>

//-- librairie perso --//  


//-- définition --// 
#define FOIX_2 2
#define PI 3.14 

//-- constante gloable --// 


//----------------------------------------------------------------------------------//
//-- nom fct : main
//-- paramètre entrée : -
//-- paramètre sortie : - 
//-- paramètre IN-OUT : - 
//-- description : programme principal =>
//----------------------------------------------------------------------------------//
void main() 
{
	//-- constante --// 
	//-- reel 
	//-- à éviter -> si possible -> raison gestion mémoire 
	/*const float PI_v1 = 3.14;
	const float FOIX_2_2 = 2;*/



	//-- variables --//
	//-- 

	//-- Reel
	float rayon_m = 10;          // _m => metre 
								 // cast implcite -> entier -> reel
	float perimetre1_m, perimetre2_m;



	//-- une imstruction  est composé d'opérandes (variable) et d'opérateur (signe) --//
	//-- cast => (type)variable 
	perimetre1_m = (float)FOIX_2 * (float)PI * rayon_m;

	//-- attention au cast implicite
	perimetre2_m = (float)(FOIX_2 * PI * rayon_m);

	//-- appel de fct 
	//--> printf 
	printf("%f \r\n %f", perimetre1_m, perimetre2_m);
	
}




