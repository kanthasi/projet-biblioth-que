#include <stdio.h>
#include "login.h"


void reg();
void login();

int main(){
  int choix;
  printf("\n***** Application CY-BiblioTech ******\n");
  printf("1. Se connecter\n");
  printf("2. Nouvel utilisateur\n");
  scanf("%d",&choix);
  switch(choix){
    case 1 : login(); break;
    case 2 : reg(); break;
    }
	return 0;

}







