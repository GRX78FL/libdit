#include "../../src/libdit.h"

int
alphasort64 (const void **a, const void **b) {

	int (*r_alphasort64)(const void **a, const void **b);
	r_alphasort64 = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %p)\n", __func__, a, b);
	return r_alphasort64(a, b);
}
