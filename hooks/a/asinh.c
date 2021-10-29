#include "../../src/libdit.h"

double
asinh (double x) {

	double (*r_asinh)(double x);
	r_asinh = dlsym(RTLD_NEXT, __func__);

	report("%s(%e)\n", __func__, x);
	return r_asinh(x);
}
