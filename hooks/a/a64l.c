#include "../../src/libdit.h"

long int 
a64l (const char *string) {

	long int (*r_a64l)(const char *string);
	r_a64l = dlsym(RTLD_NEXT, __func__);

	report("%s(\"%s\")\n", __func__, string);
	return r_a64l(string);
}
