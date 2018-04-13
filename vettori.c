#include <stdio.h>

void size(){
	double a1[10];

	double res[2];

	double *pa = a1;

	size_t s1 = sizeof(a1); // 80 byte

	size_t s2 = sizeof(pa); // 8 byte

	printf("%zu\n",s1 );
	printf("%zu\n",s2 );

	*(res) = s1; // Equal to res[0]

	*(res + 1) = s2; // Equal to res[1]

	printf("valore vettore 1 = %f \n",res[0] );
	printf("valore vattore 2 = %f \n",res[1] );

}



void puntatori(){
	char letters[26];
	char *pc1 = letters;
	char *pc2 = letters;
	char *pc3 = &letters[0];

	letters[4] = 'e';

	pc1[4] = 'e';

	*(letters + 4) = 'e';

	*(pc2 + 4) = 'e';

	pc3 = &letters[10];
	pc3 = &pc1[10];
	pc3 = letters + 10;
	pc3 = pc2 + 10;
}



int main(){

	unsigned buffer[10];

	buffer[4] = 20;

	double *s = 0;

	int i = 0;

	unsigned *pbuff = buffer; // buffer è già un puntatore non serve la &

	unsigned *pbuff2 = buffer + 5;

	printf("valore di *pbuff2 = %du \n", *pbuff2 );

	size();



	return 0;
}
