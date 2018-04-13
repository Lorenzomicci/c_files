#include <stdio.h>
#include <assert.h>

double add(double a,double b){
  return a + b;
}

double sub(double a,double b){
  return a - b;
}

double mul(double a,double b){
  return a * b;
}

double div(double a,double b){
  assert(b!=0.0); return a/b;
}

/*Funzione che prende come parametro un' altra funzione tra le quattro
  sopra definite e ne restituisce il risultato
*/
void execute_operation(double (*f)(double,double),double x,double y){
  double result = f(x,y);
  printf("Result of operation on %3.2f and %3.2f is %7.4f\n", x, y, result );
}



int main(int argc, char const *argv[]) {
  double val1 = 4.3, val2 = 5.7;

  execute_operation(add, val1, val2);
  execute_operation(sub, val1, val2);
  execute_operation(mul, val1, val2);
  execute_operation(div, val1, val2);
  return 0;
}
