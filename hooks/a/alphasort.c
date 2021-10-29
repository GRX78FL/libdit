#include "../../src/libdit.h"

int
alphasort (const void **a, const void **b) {

	int (*r_alphasort)(const void **a, const void **b);
	r_alphasort = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %p)\n", __func__, a, b);
	return r_alphasort(a, b);
}
