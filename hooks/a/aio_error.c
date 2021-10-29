#include "../../src/libdit.h"

int
aio_error (const void *aiocbp) {

	int (*r_aio_error)(const void *aiocbp);
	r_aio_error = dlsym(RTLD_NEXT, __func__);

	report("%s(%p)\n", __func__, aiocbp);
	return r_aio_error(aiocbp);
}
