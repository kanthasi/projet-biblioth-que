#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct{
char username[20];
char password[20];
} user;

void reg()
{

	FILE *log;
	user l;
	printf("enter user : ");
	scanf("%s",l.username);
	printf("enter password : ");
	scanf("%s",l.password);
	//TEST
	log=fopen("loginprojet.txt","a");
	if(log == NULL){
		perror("error");
		exit(1);	
	}
	//fprintf(log,"%s \n",l.user);
	//fprintf(log,"%s \n",l.password);
	fputs(l.username,log);
	fputs("\n",log);
	fputs(l.password,log);
	fputs("\n",log);
	void getch();
	void login();
	

	return;
}

void login()
{
	char username[20];
	char password[20];
	FILE *log;
	
	log=fopen("loginprojet.txt","r");
 	user u;
	printf("enter user : ");
	scanf("%s",u.username);
	printf("enter password : ");
	scanf("%s",u.password);
	while(fread(&u,sizeof(1),1,log))
	{
		if(strcmp(username,u.username)==0 && strcmp(password,u.password)==0){
			printf("succesful login \n");
	}
	else {
	printf("please enter correct user id and password");
		}
		fclose(log);
	return;
		}}

