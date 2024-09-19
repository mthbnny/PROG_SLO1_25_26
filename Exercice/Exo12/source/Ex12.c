//  SL121_LOGA canevas Ex12  C. HUBER 

#include <stdio.h>

// Fonction ShowItems



int main (void)
{
	char UserAnswer;
	// Variables pour test A
	

	// Variables pour test B
	

	printf("Ex12  Prenom Nom \n");  // A adapter

	// Boucle initialisation du tableau du testA


	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: affichage des informations de TableA \n");
				// suite test A 

				
			break;

			case 'B':
			case 'b':
				printf("TestB: entrez le numero de ligne (max 15) \n");
				// suite test B 

			break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}