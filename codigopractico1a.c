#include <stdio.h>

int sumar_digitos(int x);



int sumar_digitos(int x) {
	if (x == 0) {
		return 0;
	} else {
		return x % 10 + sumar_digitos(x / 10);
	}
}
int main() {
	printf("%d\n", sumar_digitos(12345));
	return 0;
}
