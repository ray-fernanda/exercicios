#include <stdio.h>

int main() {
	float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53, somaTotal;
	
	somaTotal = sp + rj + mg + es + outros;
	
	printf("\nValor total mensal da distribuidora = %.2f\n\n", somaTotal);
	
	float spPercentual = ((sp / somaTotal) * 100);
	float rjPercentual = ((rj / somaTotal) * 100);
	float mgPercentual = ((mg / somaTotal) * 100);
	float esPercentual = ((es / somaTotal) * 100);
	float outrosPercentual = ((outros / somaTotal) * 100);
	
	printf("-------------------------Percentual de cada estado-------------------------\n\n");
	printf("SP = %.2f%%\n", spPercentual);
	printf("RJ = %.2f%%\n", rjPercentual);
	printf("MG = %.2f%%\n", mgPercentual);
	printf("ES = %.2f%%\n", esPercentual);
	printf("Outros = %.2f%%\n", outrosPercentual);
	
	return 0;
}
