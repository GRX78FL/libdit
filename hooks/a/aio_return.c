#include "../../src/libdit.h"

unsigned int
aio_return (void *aiocbp) {

	unsigned int (*r_aio_return)(void *aiocbp);
	r_aio_return = dlsym(RTLD_NEXT, __func__);

	report("%s(%p)\n", __func__, aiocbp);
	return r_aio_return(aiocbp);
}
