#include <stdio.h>

float divisao(int numero1, int numero2){
	if (numero2 == 0){
		printf ("Erro, se atente a divisao por zero!");
		return 0.0;
	} else {
		return (float)numero1/numero2;
	}
}

int main (){
	int numero1, numero2;
	float resultado;
	
	printf ("Digite o primeiro numero : ");
	scanf ("%d", &numero1);
	
	printf ("\nDigite o segundo numero : ");
	scanf ("%d", &numero2);
	
	resultado = divisao(numero1, numero2); //divisão = float ao começo do codigo.
	
	printf ("\nO resultado da divisao foi : %.1f ", resultado);
	
	return 0;
}
