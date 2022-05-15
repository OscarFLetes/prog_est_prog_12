/*Autor: OScar eduarod fletes Ixta, Realizado: 17/02/22
	programa que pida 20 numeros y calcule su suma
	Programa en lenguaje c que muestra el uso de scanf, y el uso del ciclo while
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo int, float
		-scanf
		-Operaciones aritmeticas 
		-Uso del ciclo while
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables enteras, como declararlas, pedirlas por teclado, 
	usar el ciclo while, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa inicia el ciclo while, despues pide como entrada 1 variable de tipo int (valor del numero),
	El programa pide 20 números y calcula su suma
	*/
	
#include<stdio.h>

int main (){
	//Variables
	float numero, suma=0; //variable con decimal 
	int i=0; //variable numero entero
	//Proceso 
	while(i<20){ //ciclo while que valida, que mientras i sea menor que 20, haga todo el ciclo
		//Entrada
		printf("Introduce el valor numero %d: ",i); //imrpime mensaje
		scanf("%f",&numero); //lee el numero insertado por el teclado
		suma=suma+numero; //ecuacion 
		i++; //contador 
		//Salida
		printf("La suma es %.2f\n",suma); //imrpime la salida de la suma 		
	}
	
	return 0;
}
