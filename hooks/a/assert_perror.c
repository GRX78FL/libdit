#include "../../src/libdit.h"

void 
assert_perror (int errnum) {
	
	void (*r_assert_perror)(int errnum);
	r_assert_perror = dlsym(RTLD_NEXT, __func__);

	report("%s(%d)\n", __func__, errnum);
	return r_assert_perror(errnum);
}

