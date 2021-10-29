#include "../../src/libdit.h"

long double
asinl (long double x) {

	long double (*r_asinl)(long double x);
	r_asinl = dlsym(RTLD_NEXT, __func__);

	report("%s(%Le)\n", __func__, x);
	return r_asinl(x);
}
