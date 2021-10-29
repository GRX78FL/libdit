#include "../../src/libdit.h"

int
brk (void *addr) {

	int (*r_brk)(void *addr);
	r_brk = dlsym(RTLD_NEXT, __func__);

	report("%s(%p)\n", __func__, addr);
	return r_brk(addr);
}
