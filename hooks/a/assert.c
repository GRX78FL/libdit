#include "../../src/libdit.h"

void
assert (int expression) {

	void (*r_assert)(int expression);
	r_assert = dlsym(RTLD_NEXT, __func__);

	report("%s(%d)\n", __func__, expression);
	return r_assert(expression);
}
