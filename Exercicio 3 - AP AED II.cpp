#include <stdio.h>
#define PI 3.14 //Valor de pi

float calculadorArea(float raio){
	return PI * raio * raio; //isso ae é a formula da area de um circulo 
}

int main (){
	float area,raio;
	
	printf ("Escreva um valor para o raio -> ");
	scanf ("%f", &raio);
	
	area = calculadorArea (raio);
	
	printf ("A area eh : %.1f e a do raio eh : %.1f", area, raio);
	
	return 0;
}

