
#include <stdio.h>

int contieneDRecv(int arr[], int index, int size, int D, int *numConDigito) {
	if (index == size) {
		return 0;  
	}
	
	int num = arr[index];
	int original = num;
	while (num > 0) {
		if (num % 10 == D) {
			*numConDigito = original;
			return 1;  
		}
		num /= 10;
	}
	
	return contieneDRecv(arr, index + 1, size, D, numConDigito);
}

int main() {
	int numeros[4] = {456, 73, 821, 915};
	int D = 1;
	int numConDigito = 0;
	int size = sizeof(numeros) / sizeof(numeros[0]);
	
	if (contieneDRecv(numeros, 0, size, D, &numConDigito)) {
		printf("%d esta presente en el numero %d del arreglo.\n", D, numConDigito);
	} else {
		printf("%d no esta presente en ninguno de los numeros del arreglo.\n", D);
	}
	
	return 0;
}
