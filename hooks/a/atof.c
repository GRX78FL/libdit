#include "../../src/libdit.h"

double
atof (const char *string) {

	double (*r_atof)(const char *string);
	r_atof = dlsym(RTLD_NEXT, __func__);

	report("%s(\"%s\")\n", __func__, string);
	return r_atof(string);
}
