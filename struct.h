
typedef struct{
	int annee;
	int mois;
	int jour;
	int heure;
	int minute;
	int seconde;
}Date;


typedef struct{
char username[20];
char password[20];
} user;


typedef struct Emprunt{
    int COTE;
    int ID;
    Date emprunt;
    Date retour;
}Emprunt;

typedef struct {
char titre[100];
char auteur[100];
int numid;
char categorie[100];
int date;
}book;

/// règles bibliothèque
