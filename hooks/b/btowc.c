#include "../../src/libdit.h"

unsigned int
btowc (int c) {

	unsigned int (*r_btowc)(int c);
	r_btowc = dlsym(RTLD_NEXT, __func__);

	report("%s(%u)\n", __func__, c);
	return r_btowc(c);
}
