#include "../../src/libdit.h"

void *
aligned_alloc (size_t alignment, size_t size) {

	void *(*r_aligned_alloc)(size_t alignment, size_t size);
	r_aligned_alloc = dlsym(RTLD_NEXT, __func__);

	report("%s(%u, %u)\n", alignment, size);
	return r_aligned_alloc(alignment, size);
}
