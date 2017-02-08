#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 10000 
#define TAILLE 500 

typedef struct S_s
{
  int * tab_int[TAILLE] ; 
  char tab_char[TAILLE] ; 
} S_t ; 


char f3() 
{
  char c = 'a' + (rand() % ('z'+1)) ;
  return( c ) ;
}


int *f2()
{
  int *i=malloc(sizeof(int));
  *i=rand();
  return(i) ; /*etourne la valeur de i qui est rand */

}


S_t * f1() 
{
  int i , j ; 
  S_t *tab=malloc(sizeof(S_t)) ; /*allouer la mémoire au pointeur de tab de type S_t*/

  for( i=0 ; i<N ; i++ )
    {
      for( j=0 ; j<TAILLE ; j++ ) 
	{
	  tab[i].tab_int[j] = f2()  ;
	  tab[i].tab_char[j] = f3() ; 
	}
    }

	
  return(tab) ; 
	
}



int main()
{
  S_t *tab[N]; 	/*declaration d'un tableau de N pointeurs sur des S_t; en effet avant était déclarer qu'un pointeur sur S_t */

  printf("Debut du programme\n"); 

  srand(getpid());

  printf("Appel de f1\n"); 
  *tab = f1() ; 
  printf( "Retour de f1\n") ; 
  
  printf("Fin normale du programme\n"); 
	
  return(0); 
	free(tab[N]);
}
