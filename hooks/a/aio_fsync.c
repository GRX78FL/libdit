#include "../../src/libdit.h"

int
aio_fsync (int op, void *aiocbp) {

	int (*r_aio_fsync)(int op, void *aiocbp);
	r_aio_fsync = dlsym(RTLD_NEXT, __func__);

	report("%s(%d, %p)\n", __func__, op, aiocbp);
	return r_aio_fsync(op, aiocbp);
}
