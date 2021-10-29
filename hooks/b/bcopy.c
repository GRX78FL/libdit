#include "../../src/libdit.h"

void
bcopy (const void *from, const void *to, size_t size) {

	void (*r_bcopy)(const void *from, const void *to, size_t size);
	r_bcopy = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %p, %u)\n", __func__, from, to, size);
	return r_bcopy(from, to, size);
}
