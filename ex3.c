#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	double faturamento[30] = {22174.1664, 24537.6698, 26139.6134,  0.0,  0.0, 26742.6612, 0.0, 42889.2258, 46251.174, 11191.4722, 0.0, 0.0, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.2614, 0.0, 0.0, 35240.1826, 43829.1667, 18235.6852, 4355.0662, 13327.1025,  0.0,  0.0, 25681.8318, 1718.1221, 13220.495, 8414.61};
	double menorValor, maiorValor, soma, mediaMensal;
	int i, maiorDia, menorDia, mediaDias = 0;
	
	//Maior valor
	maiorValor = faturamento[0];
	maiorDia = 0;
	for(i = 1; i < 30; i++) {
		if(faturamento[i] > maiorValor) {
			 maiorValor = faturamento[i];
			 maiorDia = i;
		}
	}
	
	//Menor valor
	menorValor = faturamento[0];
	menorDia = 0;
	for(i = 1; i < 30; i++) {
		if(faturamento[i] < menorValor && faturamento[i] != 0) {
			 menorValor = faturamento[i];
			 menorDia = i;
		}
	}
	
	//Soma e Média
	for(i = 0; i < 30; i++) {
		soma = soma + faturamento[i];	
	}
	
	mediaMensal = soma / 21;
	
	//Número de dias em que o valor de faturamento foi superior à média
	for(i = 0; i < 30; i++) {
		if(faturamento[i] > mediaMensal) {
			mediaDias++;
		}
	}
	
	printf("Dia de Maior Faturamento: %i\n", maiorDia + 1);
	printf("Maior Valor: %.4f\n\n", maiorValor);
	
	printf("Dia de Menor Faturamento: %i\n", menorDia + 1);
	printf("Menor Valor: %.4f\n\n", menorValor);
	
	printf("Média Mensal: %.4f\n", mediaMensal);
	printf("Quantidade de Dias com Faturamento Superior a Média: %i\n", mediaDias);
	
	return 0;
}
