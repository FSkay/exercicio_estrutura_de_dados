#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"Portuguese");
	int nTerneiro, abaixoDaMedia, i;
	float *pesoTerneiro;
	float somaTerneiro, mediaTerneiro;
	printf("Digite o número de terneiros: ");
	scanf("%i", &nTerneiro);
	pesoTerneiro = (float*) malloc(nTerneiro*sizeof(float));
	if (pesoPorcos) {
		for (i = 0; i < nTerneiro; i++) {
			printf("- PESO DO TERNEIRO %i: ", i + 1);
			scanf("%f", &pesoTerneiro[i]);
			somaTerneiro = somaTerneiro + pesoTerneiro[i];
			mediaTerneiro = somaTerneiro / nTerneiro;
		}
		for (i = 0; i < nTermeorp; i++) {
			printf("TERNEIRO %i: %.2f\n", i + 1, *(pesoTerneiro + i));
		}
		for (i = 0; i < nTerneiro; i++) {
			if (pesoTerneiro[i] < mediaTerneiro) {
				abaixoDaMedia++;
			}
		}
		printf("Média de peso dos terneiros: %.2fKG\n", mediaTerneiro);
		printf("Terneiro abaixo da Média: %i", abaixoDaMedia);
	}
}
