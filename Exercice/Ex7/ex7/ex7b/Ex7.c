// Solution Ex7  C. HUBER 
// Sert de canevas pour ex7b SL124

#define _USE_MATH_DEFINES
#include <math.h>		// pour la fonction sin

#include <stdio.h>



// Fonction FtestA
void FtestA(int NbStars)
{
	int i;

	for ( i = 0; i < NbStars; i++) {
		
			printf("*");
	}
	printf("\n");
	
}  // TestA

// Fonction FtestB_rad
double FtestB(double Angle)
{
	const double Pi = 3.1415926535;

	return (Angle * M_PI / 180);
}  // TestB

int main (void)
{
	char UserAnswer;
	int ValA;
	double ValB;
	// Variables pour test B
	double AngleRad, ValSin;
	

	printf("Ex7 Christian HUBER \n");

	
	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: entrez un nombre entre 1 et 15 \n");
				scanf_s("%d%*c", &ValA);
				// suite TestA à introduire ICI
				if (ValA > 15) ValA = 15;
				if (ValA > 0 )  
				{
					FtestA(ValA);
				}
			break;

			case 'B':
			case 'b':
				printf("TestB: entrez un angle de 0 a 90 degres \n");
				scanf_s("%lf%*c", &ValB);
				// suite TestB à introduire ICI
				if (ValB <= 90.0) {
					AngleRad = FtestB(ValB);
					ValSin = sin(AngleRad); 
					printf("Angle en deg. = %7.2f angle en rad = %8.4f sinus =  %8.5f \n", ValB, AngleRad, ValSin);
				} else {
					printf("Angle hors limite ! \n");
				}
			break;

			
		
		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}