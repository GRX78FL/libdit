#include "../../src/libdit.h"

void
aio_init (const void *init) {

	void (*r_aio_init)(const void *init);
	r_aio_init = dlsym(RTLD_NEXT, __func__);

	report("%s(%p)\n", __func__, init);
	r_aio_init(init);
	return;
}
