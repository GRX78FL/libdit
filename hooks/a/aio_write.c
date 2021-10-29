#include "../../src/libdit.h"

int 
aio_write (void *aiocbp) {

	int (*r_aio_write)(void *aiocbp);
	r_aio_write = dlsym(RTLD_NEXT, __func__);

	report("%s(%p)\n", __func__, aiocbp);
	return r_aio_write(aiocbp);
}
