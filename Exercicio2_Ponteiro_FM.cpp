/*
	Exercicio 2
	Felipe Menegat
*/

#include <stdlib.h>
#include <stdio.h>

int main () {	
	
int y[7]={80, 70, 60, 50, 40, 30, 20}; // VETOR
int *py; // PONTEIRO
int n; // decrecmentadora
n=0; // inicia com 0
	py=&y[n]; //
	
	for (n=7;n>0;n--){
		py = &y[n];
		printf("%d\n", *(py+n));	
		printf("%d\n", (py+n));
		printf("%d\n", &y[n]);

	}
system("pause");
return 0;	

}
