#include "../../src/libdit.h"

int 
adjtime (const void *delta, void *olddelta) {

	int (*r_adjtime)(const void *delta, void *olddelta);
	r_adjtime = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %p)\n", __func__, delta, olddelta);
	return r_adjtime(delta, olddelta);
}
