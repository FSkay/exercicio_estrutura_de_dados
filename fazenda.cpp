#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"Portuguese");
	int nPorcos, abaixoDaMedia, i;
	float *pesoPorcos;
	float somaPorcos, mediaPorcos;
	printf("Digite o número de porcos: ");
	scanf("%i", &nPorcos);
	pesoPorcos = (float*) malloc(nPorcos*sizeof(float));
	if (pesoPorcos) {
		for (i = 0; i < nPorcos; i++) {
			printf("- PESO DO PORCO %i: ", i + 1);
			scanf("%f", &pesoPorcos[i]);
			somaPorcos = somaPorcos + pesoPorcos[i];
			mediaPorcos = somaPorcos / nPorcos;
		}
		for (i = 0; i < nPorcos; i++) {
			printf("PORCO %i: %.2f\n", i + 1, *(pesoPorcos + i));
		}
		for (i = 0; i < nPorcos; i++) {
			if (pesoPorcos[i] < mediaPorcos) {
				abaixoDaMedia++;
			}
		}
		printf("Média de Peso dos Porcos: %.2fKG\n", mediaPorcos);
		printf("Porcos Abaixo da Média: %i", abaixoDaMedia);
	}
}
