#include "../../src/libdit.h"

int
aio_read64 (void *aiocbp) {

	int (*r_aio_read64)(void *aiocbp);
	r_aio_read64 = dlsym(RTLD_NEXT, __func__);

	report("%s(%p)\n", aiocbp);
	return r_aio_read64(aiocbp);
}
