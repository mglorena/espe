#include <stdio.h>


int busquedaBinaria(int lista[], int inicio, int fin, int buscado) {

	if (inicio > fin) {
		return -1;
	}
	

	int medio = (inicio + fin) / 2;
	

	if (lista[medio] == buscado) {
		return medio;
	}
	

	if (lista[medio] > buscado) {
		return busquedaBinaria(lista, inicio, medio - 1, buscado);
	}
	

	return busquedaBinaria(lista, medio + 1, fin, buscado);
}

int main() {
	int lista[] = {17, 45, 19, 8, 10, 12, 25, 23};
	int n = sizeof(lista) / sizeof(lista[0]);
	int buscado = 10;  // Elemento a buscar
	
	int resultado = busquedaBinaria(lista, 0, n - 1, buscado);
	
	if (resultado != -1) {
		printf("Elemento %d encontrado en el índice %d\n", buscado, resultado);
	} else {
		printf("Elemento %d no encontrado en el arreglo\n", buscado);
	}
	
	return 0;
}
