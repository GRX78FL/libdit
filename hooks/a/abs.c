#include "../../src/libdit.h"

int 
abs (int number) {

	int (*r_abs)(int number);
	r_abs = dlsym(RTLD_NEXT, __func__);

	report("%s(%d)\"", __func__, number);
	return r_abs(number);
}
