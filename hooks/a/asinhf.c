#include "../../src/libdit.h"

float
asinhf (float x) {

	float (*r_asinhf)(float x);
	r_asinhf = dlsym(RTLD_NEXT, __func__);

	report("%s(%f)\n", __func__, x);
	return r_asinhf(x);
}
