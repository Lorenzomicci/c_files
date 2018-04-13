#include <stdio.h>


/*
 Dichiarazione di un puntatore a funzione

 Le parentesi tonde intorno a *pf sono cruciali per definire che
 la funzione non non ritorna un puntatore ma è un function pointer
*/
double (*pf)(double,int);


/*
 Riferimento ad un elemento passando un array
*/

char *find_first(char *str, char c){
  while(*str++ != '\0'){
    if(*str==c)  return str;
      return NULL;
  }
}






double *geometric_growth(void){

  static double grows = 0.1;
  grows *= 1.1;
  return &grows;

}


/*
 Una funzione può ritornare un puntatore:

  int *func_returns_pointer(void);

*/

int *misguided(void){
  int array[10], i; // L'array ha un extent locale verrà distrutto alla fine del blocco

  for(i=0; i < 10; ++i){
    array[i] = i;
    return array;
  }

}





int main(){

  float fval, array[10];
  float *p1, *p2, *p3 = &array[5];



  int i=2, j;
  p1 = NULL; //Assegnamento a NULL o a 0, 0L
  p2 = &fval; // Assegnare un indirizzo

  p1 = p2; // Assegnare un puntatore ad un altro puntatore

  p2 = p3-4; /* Addition  and subtraction per un intero a = 4. pointer-offset-expression */

  p2+=i; // Come sopra

  j = p3 - p2; // La sottrazione di puntatori ritorna il numero di elelmenti
  // tra p2 e p3

  i = p2 < p3; // operatori relazionali <,>,==,!=,<=,>=

  return 0;
}
