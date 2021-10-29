#include "../../src/libdit.h"

double
acos (double x) {

	double (*r_acos)(double x);
	r_acos = dlsym(RTLD_NEXT, __func__);

	report("%s(\"%d\")\n", __func__, x);
	return r_acos(x);
}
