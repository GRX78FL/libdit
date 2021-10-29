#include "../../src/libdit.h"

long double
atanl (long double x) {

	long double (*r_atanl)(long double x);
	r_atanl = dlsym(RTLD_NEXT, __func__);

	report("%s(%Le)\n", __func__, x);
	return r_atanl(x);
}
