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
 * 		This file is in charge of setting the content of certain files
 *	
 * Functions:
 * 		set_coeficients:
 *			type: void
 *			returns: nothing
 *			description: Just get values for certainr variables
 */
#include "../lib/methods.h"

void set_init_variables(){
	printf("\n\nIntroduce los datos para el intervalo [X,Y] respectivamente, separados por un espacio:\n");
	scanf("%lf %lf",&inter_X,&inter_Y);

	printf("\n\nAhora, deberas introducir el valor del ERROR:\n");
	scanf("%lf",&ERROR_VAL);
}