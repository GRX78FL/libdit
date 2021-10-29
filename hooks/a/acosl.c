#include "../../src/libdit.h"

long double
acosl (long double x) {

	long double (*r_acosl)(long double x);
	r_acosl = dlsym(RTLD_NEXT, __func__);

	report("%s(%Le)\n", __func__, x);
	return r_acosl(x);
}
