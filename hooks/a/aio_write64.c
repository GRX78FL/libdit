#include "../../src/libdit.h"

int 
aio_write64 (void *aiocbp) {

	int (*r_aio_write64)(void *aiocbp);
	r_aio_write64 = dlsym(RTLD_NEXT, __func__);

	report("%s(%p)\n", __func__, aiocbp);
	return r_aio_write64(aiocbp);
}
