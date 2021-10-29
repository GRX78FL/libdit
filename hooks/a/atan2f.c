#include "../../src/libdit.h"

float
atan2f (float y, float x) {

	double (*r_atan2f)(float y, float x);
	r_atan2f = dlsym(RTLD_NEXT, __func__);

	report("%s(%f, %f)\n", __func__, y, x);
	return r_atan2f(y, x);
}

