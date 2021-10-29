#include "../../src/libdit.h"

double
asin (double x) {

	double (*r_asin)(double x);
	r_asin = dlsym(RTLD_NEXT, __func__);

	report("%s(%e)\n", __func__, x);
	return r_asin(x);
}
