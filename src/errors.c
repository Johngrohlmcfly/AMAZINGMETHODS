#include "../lib/libraries.h"

void exit_with_error(int error_code){
	switch(error_code){
		case 1:
			printf("Los argumentos introducidos no son validos, por favor introduzca EXACTAMENTE lo que se le solicita");
			break;
	}
	exit(EXIT_FAILURE);
}
