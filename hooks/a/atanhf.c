#include "../../src/libdit.h"

float
atanhf (float x) {

	float (*r_atanhf)(float x);
	r_atanhf = dlsym(RTLD_NEXT, __func__);

	report("%s(%f)\n", __func__, x);
	return r_atanhf(x);
}
