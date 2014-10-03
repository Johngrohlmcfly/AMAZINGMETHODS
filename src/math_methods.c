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
#include "../lib/functions.h"
#include "../lib/globals.h"

double second_grade_polinom(double);

//Bisection method, F(X)
double bisection(double lower, double upper, double (*f)(double)){
  double fx = second_grade_polinom(lower);
  double fy = second_grade_polinom(upper);

  double middle;
  double f_middle=1;

  if(fx == 0){
    return lower;
  }else if(fy == 0){
    return upper;
  }else{
    while(f_middle >= ERROR_VAL){
      middle = (upper+lower)/2.0;
      f_middle = second_grade_polinom(middle);

      fx = second_grade_polinom(lower);
      fy = second_grade_polinom(upper);

      printf("middle: %lf %lf %lf\n",middle,lower,upper);

      if((fy*f_middle)<0){
        lower = middle;
      }else{
        upper = middle;
      }
    }
    return middle;
  }
}

//Just evaluate a polinom based on a variable
double second_grade_polinom(double variable){
  return ((coef_A*(variable*variable))+(coef_B*variable)+coef_C);
}
