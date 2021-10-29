#include "../../src/libdit.h"

void *
bsearch (const void *key, const void *array, size_t count, size_t size, int (*compare)(void *a, void *b)) {

	void *(*r_bsearch)(const void *key, const void *array, size_t count, size_t size, int (*compate)(void *a, void *b));
	r_bsearch = dlsym(RTLD_NEXT, __func__);
	
	report("%s(%p, %p, %u, %u, %p)\n", __func__, key, array, count, size, compare);
	return r_bsearch(key, array, count, size, compare);
}
