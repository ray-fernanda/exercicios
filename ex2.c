#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>
	
bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}
	
bool isFibonacci(int n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}
	
int main() { 
	setlocale(LC_ALL, "portuguese");
		
	return 0;
}	

