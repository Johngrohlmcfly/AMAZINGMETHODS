/**
 * Author: John & Sier <johnhndzr@gmail.com -- sierisimo@gmail.com>
 *
 * Date:2/10/2014
 * LastUpdate:2/10/2014
 * version: 0.0.1~alpha1
 *
 * Name: methods.c
 *
 * Description: This programm will make evaluate a function across 5 numeric methods.
 *
 *
 * Functions:
 *
 */

#include "../lib/libraries.h"
#include "../lib/functions.h"


int main()
{
	printf("\nBienvenido!!\n Este programa te ayudara a saber que metodo es la ");
	printf("opcion mas efectiva para resolver tu ecuacion, dispondremos del metodo");
	printf(" de Biseccion, del metodo de Falsa posicion, del de Newton-Rapson y ");
	printf("del metodo de la Secante.\n Empezaremos con los datos con el supuesto");
	printf(" de que tu ecuacion es de la forma trinomio cuadrado perfecto F(x)= Ax^2 + Bx + C ...");

	set_init_variables();
	set_equation(); 
	printf("F(x)=%lf",function_fx());

	return 0;
}
