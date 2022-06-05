#include <stdio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "struct.h"
// modifier les fonctions boélienne
//test
int VerificationCote(book *premier,int COT){
    book *p;
    p=premier;
    while(p!=NULL){
        if(p->cote==COT)
            return vrai;
        p=p->suiv;
    }
    return faux;
}

int TestLivre(Emprunt **premier,int COT){
    Emprunt *p;
    p=*premier;
    while(p!=NULL){
        if(p->COTE==COT)// modifier les fonctions booéliennes
            return vrai;
        p=p->suiv;
    }
    return faux;
}
//test
int TestEmprunteur(Emprunt **premier,int id){
    Emprunt *p;
    p=*premier;
    while(p!=NULL){
        if(p->ID==id)
            return vrai;
        p=p->suiv;
    }
    return faux;
}


int NombreEmprunt(){
FILE *fichier=NULL;
int Nb_Emprunt=0;
char CH[500];
fichier = fopen("Emprunt.txt","r");
if (fichier==NULL){
printf("\nLe fichier n'existe pas !\n");

}
while(fgets(CH,500,fichier)!=NULL)
{
	Nb_Emprunt++;
}
fclose(fichier);
return Nb_Emprunt;
};
void EmprunterLivre(Emprunt **premier,book *Li){
Emprunt E,*q;
q=*premier;
FILE *liste= NULL,*f=NULL;
printf("Saisir la cote du livre a emprunter (Il faut Saisir une cote qui existe deja dans la bibliotheque):\n");
do{
printf("\tCote : ");
scanf("%d",&E.COTE);

}while(VerificationCote(Li,E.COTE)==faux);
getchar();
if(TestLivre(&q,E.COTE)==vrai)
printf("\nCe livre est deja emprunter.\n");
else{
printf("Saisir l'ID de l'emprunteur: \n");
do{
printf("\tID: ");
scanf("%d",&E.ID);

}while(VerificationID(In,E.ID)==faux);
getchar();
if(TestEmprunteur(&q,E.ID)==vrai)
printf("\nCette personne a deja emprunter un livre.\n");
else{
f = fopen("date.txt", "r");
if (f==NULL)
	printf("\nLe fichier n'existe pas !\n");
fclose(f);

liste=fopen("Emprunt.txt","a");
if(liste==NULL)
printf("\nLe Fichier n'existe pas !!\n");
fclose(liste);
}
}
}




void Livre_Emprunte_0u_Non(Emprunt **Emp,book *LiV){
    int cot;
    printf("\nSaisir la cote du livre :\n ");
    do{
        printf("\tCote : ");
        scanf("%d",&cot);

    }while(VerificationCote(LiV,cot)==faux);
    if(TestLivre(&*Emp,cot)==faux)
        printf("\nCe livre n'est pas emprunte.\n");
    else
        printf("\nCe livre est emprunte. \n");
}