//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: xx.xx.2016
// Date de modification : 28.09.2021
//
// Auteur 				: CHR (Christian Huber)
//                        Philou (Ph. Bovey)
//
// Version 				: 0.3
//
// Description          : Voir donnee exercice 4 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

//-- déclaration des librairies --// 
#include <stdio.h>	// pour usage printf
#include <stdint.h>


int main(void)
{
	// Déclaration cas A
	short A1 = 400;
	short A2 = 500;
	long ResA1;
	long ResA2;

	// Déclaration cas B
	unsigned short ValB = 0x1234;
	short HightValB;
	short LowValB;

	// Déclaration cas C
	unsigned short C1 = 0x5555;
	unsigned short C2 = 0x0F0F;
	long ResC;

	// Déclaration cas D
	long D1 = 1325;
	long D2 = 7;
	short ResD1;
	short ResD2;



	// Traitement cas A
	printf ("Traitement cas A \n");

	ResA1 = A1 * A2;
	ResA2 = A1 * A2 ;

	printf ("ResA1 = A1 * A2 soit  %d * %d = %d \n", A1, A2, ResA1);
	printf ("ResA2 = A1 * A2 soit  %d * %d = %d \n", A1, A2, ResA2);
	
	// Traitement cas B
	printf ("Traitement cas B \n");

	HightValB = ValB & 0xFF00;
	printf("valeur du byte de poid fort: %d \n", HightValB);

	LowValB = ValB & 0x00FF;
	printf("valeur du byte de poid faible: %d \n", LowValB);

	//printf ("ValB  % HighValB = %2x LowValB = %\n", );
	
	// Traitement cas C
	printf ("Traitement cas C \n");

	ResC = C1 | C2;

	printf ("ResC = %d  OU %d =  %d \n", C1, C2, ResC);

	ResC = C1 & C2;

	printf ("ResC = %d  ET %d =  %d \n", C1, C2, ResC);

	// Traitement cas D

	printf ("Traitement cas D \n");

	ResD1 = D1 / D2;
	ResD2 = D1 % D2;

	printf ("Division de %d par %d = %d Reste = %d \n", D1, D2, ResD1, ResD2);

  return(0);
}
