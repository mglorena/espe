#include <stdio.h>

int esprimo(int n) {
	int i;
	for (i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void primos(int n) {
	if (n == 1) {
		return;
	}
	if (esprimo(n)) {
		printf("%d\n", n);
	}
	primos(n - 1);
}

int main() {
	int n;
	printf("Ingrese un numero natural: ");
	scanf("%d", &n);
	printf("Los numeros primos menores que %d son: \n", n);
	primos(n);
	return 0;
}
