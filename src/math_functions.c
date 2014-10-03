
#include "../lib/globals.h"

//Just evaluate a polinom based on a variable
double second_grade_polinom(double variable){
  return ((coef_A*(variable*variable))+(coef_B*variable)+coef_C);
}
