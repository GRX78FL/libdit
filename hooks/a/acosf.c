#include "../../src/libdit.h"

float
acosf (float x) {

	float (*r_acosf)(float x);
	r_acosf = dlsym(RTLD_NEXT, __func__);

	report("%s(%f)\n", __func__, x);
	return r_acosf(x);
}
