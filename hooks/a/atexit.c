#include "../../src/libdit.h"

int
atexit (void (*function)(void)) {

	int (*r_atexit)(void (*function)(void));
	r_atexit = dlsym(RTLD_NEXT, __func__);

	report("%s(%p)\n", function);
	return r_atexit(function);
}
