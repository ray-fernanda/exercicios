#include <stdio.h>

int main() {
	char palavra[30], palavraInvertida[30];
	int i, j, fim;
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	for(fim = 0; palavra[fim] != '\0' && palavra[fim] != '\n'; fim++);
	
	for(i = fim - 1, j = 0; j < fim; i--, j++){
		palavraInvertida[j] = palavra[i];
	}  
	
	palavraInvertida[fim] = '\0';
	
	printf("Palavra invertida: %s\n", palavraInvertida);
	
	return 0;
}
