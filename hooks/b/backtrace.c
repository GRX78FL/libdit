#include "../../src/libdit.h"

int
backtrace (void **buffer, int size) {

	int (*r_backtrace)(void **buffer, int size);
	r_backtrace = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %d)\n", __func__, buffer, size);
	return r_backtrace(buffer, size);
}
