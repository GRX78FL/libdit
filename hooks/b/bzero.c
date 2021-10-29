#include "../../src/libdit.h"

void
bzero (void *block, size_t size) {

	void (*r_bzero)(void *block, size_t size);
	r_bzero = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %u)\n", __func__, block, size);
	return r_bzero(block, size);
}
