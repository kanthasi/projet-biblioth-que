#include <stdio.h>
#include<stdlib.h>
#include "struct.h"
#include 

void MenuEmprunt(){
Emprunt *Empt=NULL;
book *L=NULL;
user *I=NULL;
int c,N;
do{
printf("\n"
"                   *** Bienvenu sur l'Espace Emprunt de cytech ***\n"
"                                   *\n"
"                                   *\n"
"  ------------------------------------------------------------------------ \n"
" 1 Afficher la liste des Emprunts.                                  \n"
"2 Emprunter un livre de la bibliotheque.                           \n"
"3 Rendre un livre a la bibliotheque.                               \n"
"4 Savoir si un livre est emprunte ou non.                          \n"
"       choisir un nombre                                           ");
scanf("%d",&c);
getchar();
system("cls");
TD=TransfererDonnees();//faire les fonctions
TI=TransfererInscrits();
TL=TransfererLivres();
switch(c)
{
case 0: break;
case 1: AfficherEmprunt(TD);
printf("\n");
system("pause");
system("cls");
break;
case 2: EmprunterLivre(&TD,TL,TI);
printf("\n");
system("pause");
system("cls");
break;
case 3: RendreLivres(&TDL,TI);
system("pause");
system("cls");
break;
case 4: N=NombreEmprunt();
printf("\nLe nombre des livres empruntes est : %d\n\n",N);
printf("\n");
system("pause");
system("cls");
break;

}while(c!=0);
}
	