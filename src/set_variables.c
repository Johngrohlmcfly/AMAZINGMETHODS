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
 * 		set_coeficients
 *
 */
#include "../lib/libraries.h"
#include "../lib/globals.h"
#include "../lib/functions.h"

/**	set_init_variables
 * 		type: void
 *		returns: nothing
 *		description: Just get values for certainr variables
 *
 *  author:
 *  LastUpdate:
 */
void set_init_variables(){
	printf("\n\nIntroduce los datos para el intervalo [X,Y] respectivamente, separados por un espacio:\n");
	//
	if(scanf("%lf %lf",&inter_X,&inter_Y)!=2){
		exit_with_error(1);
	}

	printf("\n\nAhora, deberas introducir el valor del ERROR:\n");
	//
	if(scanf("%lf",&ERROR_VAL)!=1){
		exit_with_error(1);
	}
}
