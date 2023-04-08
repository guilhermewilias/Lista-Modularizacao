#include <stdio.h>

int diferenca (int numero1, int numero2){
	return numero1 - numero2;
}

int main (){
	int numero1, numero2, resultadoFinal;
	
	printf ("Digite o primeiro numero : ");
	scanf ("%d", &numero1);
	
	printf ("\nDigite o segundo numero : ");
	scanf ("%d",&numero2);
	
	resultadoFinal = diferenca (numero1, numero2);
	
	printf ("\n\nA diferenca dos dois numeros eh : %d", resultadoFinal);
	
	return 0;
}
