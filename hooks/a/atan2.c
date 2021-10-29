#include "../../src/libdit.h"

double
atan2 (double y, double x) {

	double (*r_atan2)(double y, double x);
	r_atan2 = dlsym(RTLD_NEXT, __func__);

	report("%s(%e, %e)\n", __func__, y, x);
	return r_atan2(y, x);
}

