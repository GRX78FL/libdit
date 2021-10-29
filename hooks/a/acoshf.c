#include "../../src/libdit.h"

float
acoshf (float x) {

	float (*r_acoshf)(float x);
	r_acoshf = dlsym(RTLD_NEXT, __func__);

	report("%s(%f)\n", __func__, x);
	return r_acoshf(x);
}
