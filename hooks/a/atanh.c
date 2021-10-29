#include "../../src/libdit.h"

double
atanh (double x) {

	double (*r_atanh)(double x);
	r_atanh = dlsym(RTLD_NEXT, __func__);

	report("%s(%e)\n", __func__, x);
	return r_atanh(x);
}
