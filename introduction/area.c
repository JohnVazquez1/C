#include<stdio.h> //Librer�a de entrada y salida
#include<math.h> //Librer�a de matem�tica
#define PI 3.1416 //Definiendo una constante

int main(){ //Se indica el int para que espere un entero
	float area, radio;
	radio = 5;
	area = PI * pow(5,2);
	printf("Area\n");
	printf("%s%f\n\n", "Area de Circulo con radio 5:", area);
	return 0;
}
