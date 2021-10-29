#include "../../src/libdit.h"

long double
acoshl (long double x) {

	long double (*r_acoshl)(long double x);
	r_acoshl = dlsym(RTLD_NEXT, __func__);

	report("%s(%Le)\n", __func__, x);
	return r_acoshl(x);
}
