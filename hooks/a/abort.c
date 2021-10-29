#include "../../src/libdit.h"

void 
abort (void) {

	void (*r_abort)(void);
	r_abort = dlsym(RTLD_NEXT, __func__);
	
	report("%s()\n", __func__);
	r_abort();
	abort();
}
