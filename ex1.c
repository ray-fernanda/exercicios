#include <stdio.h>

int main() {
	int indice = 13, soma = 0, K = 0;
	
	while(K < indice) {
		K = K + 1;
		soma = soma + K;
	}
	
	printf("Resultado: %i", soma);
	return 0;
}
