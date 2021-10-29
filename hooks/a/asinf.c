#include "../../src/libdit.h"

float
asinf (float x) {

	float (*r_asinf)(float x);
	r_asinf = dlsym(RTLD_NEXT, __func__);

	report("%s(%f)\n", __func__, x);
	return r_asinf(x);
}
