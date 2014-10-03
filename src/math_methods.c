/**
 * Author: John & Sier <johnhndzr@gmail.com -- sierisimo@gmail.com>
 *
 * Date:2/10/2014
 * LastUpdate:2/10/2014
 * version: 0.0.1~alpha1
 *
 * Name: math_methods.c
 *
 * Description:
 * 		This file is in charge of setting the content of certain files
 *
 * Functions:
 *
 */

#include "../lib/libraries.h"
#include "../lib/globals.h"

 //Bisection method, F(X)
 double function_fx(){
 	FunctionFx= ((coef_A*(inter_X*inter_X))+(coef_B*inter_X)+coef_C);
 	return FunctionFx;
 }


