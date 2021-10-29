#include "../../src/libdit.h"

int
aio_cancel (int fields, void *aiocbp) {

	int (*r_aio_cancel)(int fields, void *aiocbp);
	r_aio_cancel = dlsym(RTLD_NEXT, __func__);

	report("%s(%d, %p)\n", fields, aiocbp);
	return r_aio_cancel(fields, aiocbp);
}
