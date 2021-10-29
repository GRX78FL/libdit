#include "../../src/libdit.h"

long double
atanhl (long double x) {

	long double (*r_atanhl)(long double x);
	r_atanhl = dlsym(RTLD_NEXT, __func__);

	report("%s(%Le)\n", __func__, x);
	return r_atanhl(x);
}
