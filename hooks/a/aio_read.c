#include "../../src/libdit.h"

int
aio_read (void *aiocbp) {

	int (*r_aio_read)(void *aiocbp);
	r_aio_read = dlsym(RTLD_NEXT, __func__);

	report("%s(%p)\n", aiocbp);
	return r_aio_read(aiocbp);
}
