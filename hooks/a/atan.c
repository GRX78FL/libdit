#include "../../src/libdit.h"

double
atan (double x) {

	double (*r_atan)(double x);
	r_atan = dlsym(RTLD_NEXT, __func__);

	report("%s(%e)\n", __func__, x);
	return r_atan(x);
}
