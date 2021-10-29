#include "../../src/libdit.h"

long double
atan2l (long double y, long double x) {

	long double (*r_atan2l)(long double y, long double x);
	r_atan2l = dlsym(RTLD_NEXT, __func__);

	report("%s(%Le, %Le)\n", __func__, y, x);
	return r_atan2l(y, x);
}

