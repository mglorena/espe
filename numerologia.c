#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int sumar_digitos(char *num, int suma);

void numerologia() {
	char fecha[20];
	printf("Ingrese su fecha de nacimiento con el siguiente formato dd/mm/aaaa:");
	scanf("%s", fecha);
	char *numeros = strtok(fecha, "/");
	int suma = 0;
	
	while (numeros != NULL) {
		suma = sumar_digitos(numeros, suma);
		numeros = strtok(NULL, "/");
	}
	
	printf("%d\n", suma);
}

int sumar_digitos(char *num, int suma) {
	for (int i = 0; num[i] != '\0'; i++) {
		if (num[i] != '0') {
			suma += num[i] - '0';
		}
	}
	
	if (suma > 10) {
		char temp[20];
		sprintf(temp, "%d", suma);
		suma = sumar_digitos(temp, 0);
		return suma;
	} else {
		return suma;
	}
}

int main() {
	numerologia();
	return 0;
}
