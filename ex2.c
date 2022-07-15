#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>
	
bool quadradoPerfeito(int x) {
    int s = sqrt(x);
    return (s * s == x);
}
 
bool Fibonacci(int n) {
    return quadradoPerfeito(5 * n * n + 4) || quadradoPerfeito(5 * n * n - 4);
}
 
int main() {
	setlocale(LC_ALL, "portuguese");
	
    int num;
    
    printf("Digite um n�mero: ");
    scanf("%i",&num);
	
	if(Fibonacci(num)) {
		printf("Este n�mero pertence a sequ�ncia!\n");
	} else {
		printf("Este n�mero n�o pertence a sequ�ncia!\n");
	}
	
	return 0;
}
 
