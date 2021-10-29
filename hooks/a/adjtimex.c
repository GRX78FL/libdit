#include "../../src/libdit.h"

int
adjtimex (void *timex) {

	int (*r_adjtimex)(void *timex);
	r_adjtimex = dlsym(RTLD_NEXT, __func__);

	report("%s(%p)\n", __func__, timex);
	return r_adjtimex(timex);
}
