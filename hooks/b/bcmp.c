#include "../../src/libdit.h"

int
bcmp (const void *a1, const void *a2, size_t size) {

	int (*r_bcmp)(const void *a1, const void *a2, size_t size);
	r_bcmp = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %p, %u)\n", __func__, a1, a2, size);
	return r_bcmp(a1, a2, size);
}
