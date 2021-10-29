#include "../../src/libdit.h"

void *
alloca (size_t size) {

	void *(*r_alloca)(size_t size);
	r_alloca = dlsym(RTLD_NEXT, __func__);

	report("%s(%u)\n", __func__, size);
	return r_alloca(size);
}
