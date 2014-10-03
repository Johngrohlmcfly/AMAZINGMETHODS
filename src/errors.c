/**
 * Author: John & Sier <johnhndzr@gmail.com -- sierisimo@gmail.com>
 *
 * Date:2/10/2014
 * LastUpdate:2/10/2014
 * version: 0.0.1~alpha1
 *
 * Name: set_variables.c
 *
 * Description:
 *
 *
 * Functions:
 *
 */
#include "../lib/libraries.h"

void exit_with_error(int error_code){
	switch(error_code){
		case 1:
			printf("Los argumentos introducidos no son validos, por favor introduzca EXACTAMENTE lo que se le solicita");
			break;
	}
	exit(EXIT_FAILURE);
}

void error_at_calculus(int error_code){
	switch(error_code){
		case 1:
			printf("El metodo no puede encontrar una solucion adecuada para su problema");
			break;
	}
}
