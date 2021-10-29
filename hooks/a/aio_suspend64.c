#include "../../src/libdit.h"

int
aio_suspend64 (const void *const list[], int nent, const void *timeout) {

	int (*r_aio_suspend64)(const void *const list[], int nent, const void *timeout);
	r_aio_suspend64 = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %d, %p)\n", list, nent, timeout);
	return r_aio_suspend64(list, nent, timeout);
}
