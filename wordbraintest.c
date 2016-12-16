/**
* \file wordbraintest.c
* \author William NJOFANG
* \version 0.1
* \date dec 10, 2016
*/

#include "../includes/wordbrain.h"


/**
* \fn void test_jouer()
* \brief Affiche la prochaine lettre du mot dont toutes les lettres n'ont pas étés decouvertes.
* 
* Cette fonction ne change pas l'état du mot (si il est trouvé ou pas), et donc l'utilisateur
* doit rentrer les mots même si ceux-si sont déjà entièrement affichés
* 
*/


void test_jouer(){
	jouer();
	if(choix<0){
		printf("le test a raté");
	}
	
	switch(choix){
		case '*': printf("le test a raté"); break;
		case '-': printf("le test a raté"); break;
		case '+': printf("le test a raté"); break;
		case '/': printf("le test a raté"); break;
		case "po": printf("le test a raté"); break;
		case 'm': printf("le test a raté"); break;
	}

}


void test_selectNiv(){
	char choix;
	int nombre;

	if(strcmp(choix,"non") ==0 && strcmp(choix,"oui")==){
		selectNiv(choix);
		return 0;

	if(strcmp(choix,"non") !=0 && strcmp(choix,"oui")!=0){
		printf("le test a raté");//Nous pouvions aussi utiliser return 1 
	}

	if((strcmp(choix,nombre)==0){
		printf("le test a raté");}	

}


void main(){

	test_selectNiv();
	test_jouer();	
}