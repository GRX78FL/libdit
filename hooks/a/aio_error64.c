#include "../../src/libdit.h"

int
aio_error64 (const void *aiocbp) {

	int (*r_aio_error64)(const void *aiocbp);
	r_aio_error64 = dlsym(RTLD_NEXT, __func__);

	report("%s(%p)\n", __func__, aiocbp);
	return r_aio_error64(aiocbp);
}
