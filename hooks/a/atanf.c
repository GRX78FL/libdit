#include "../../src/libdit.h"

float
atanf (float x) {

	float (*r_atanf)(float x);
	r_atanf = dlsym(RTLD_NEXT, __func__);

	report("%s(%f)\n", __func__, x);
	return r_atanf(x);
}
