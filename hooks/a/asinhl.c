#include "../../src/libdit.h"

long double
asinhl (long double x) {

	long double (*r_asinhl)(long double x);
	r_asinhl = dlsym(RTLD_NEXT, __func__);

	report("%s(%Le)\n", __func__, x);
	return r_asinhl(x);
}
