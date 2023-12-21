//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: 30.09.2015
// Date de modification : 07.01.2016
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: x.x
//
// Description          : 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interprétation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers différents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//

//--- librairie standart ---//
#include <stdio.h>	// pour usage printf et scanf_s
#include <stdint.h>
                    // Nouveauté du VC++ 2005, 2008, 2010 et 2015 : le scanf_s remplace scanf

int main(void)
{
    //déclaration de variable
    char choice = 0;
    int valA;
    int8_t int8Val = 125;
    uint8_t uint8Val = 125;
    int i;
    while (1)
    {
        printf("Test A ou B. Q pour quitter\n");

        scanf("%c", &choice);   // mets un caractère dans "choice"

        switch (choice)
        {

        case 'a': // '...' prend a comme un caratère et pas un valeur de table ASCII
        case 'A':
            printf("entrer un nombre de 1 a 9.\n");

            scanf("%d", &valA);

            if (valA > 9)
            {
                printf("valA limite a 9.\n");
            }

            else if (valA >= 0)
            {
                for (i = 0; i <= valA; i++)
                {
                    printf("i = %d\n", i);
                }
            }
            break;

        case 'b':
        case 'B':

            i = 0;

            for (i = 0; i <= 10; i++)
            {
                printf("int8Val = %+3d% / uint8Val = %d \n", int8Val, uint8Val); //%d% pour afficher le signe de la variable // "+3" affiche le signe + si la valeur est positive

                int8Val++;
                uint8Val++;
            }
            break;

        case 'q':
        case 'Q':
      // system("pause");
           quick_exit(0);      //arrète le programme        

            break;
        default:
            break;
        }

    }


       
    
  return(0);
}
