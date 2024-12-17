#include <stdio.h>
#include <string.h>
struct Contact{
   char nom[100];
   char numero[11];
   int age;
};

struct Contact contacts[1];
int pos = 0;

int ajouter(char *nom, char *numero, int age);
void afficher();

int main(int argc, char*argv[]){
   if(ajouter("Emery", "0195222073", 230)<0)
	   printf("IMPOSSIBLE d'AJOUTER");
   if(ajouter("Bigo", "0198765443", 45)< 0)
	   printf("IMPOSSIBLE d'Ajouter");
   afficher();
   return 0;
}

int ajouter(char *nom, char *numero, int age){
   struct Contact c;
   if(pos >= 1)
	return -1;
   strcpy(c.nom, nom);
   strcpy(c.numero, numero);
   c.age = age;
   contacts[pos++] = c;
   return 0;
}

void afficher(){
   if(pos == 0)
	   return;
   for(int i = 0; i<pos; i++){
       printf("Nom: %s,  numero: %s, age: %d\n", contacts[i].nom, contacts[i].numero, contacts[i].age);
   }
}
