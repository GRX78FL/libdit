#include "../../src/libdit.h"

long int
atol (const char *string) {

	long int (*r_atol)(const char *string);
	r_atol = dlsym(RTLD_NEXT, __func__);

	report("%s(\"%s\")\n", __func__, string);
	return r_atol(string);
}
