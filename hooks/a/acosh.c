#include "../../src/libdit.h"

double
acosh (double x) {

	double (*r_acosh)(double x);
	r_acosh = dlsym(RTLD_NEXT, __func__);

	report("%s(%e)\n", __func__, x);
	return r_acosh(x);
}
