//set_variables.c
void set_init_variables();
void set_equation();

//errors.c
void exit_with_error(int);
void error_at_calculus(int);

//math_methods.c
double bisection(double, double, double (*)(double));
double second_grade_polinom(double);
