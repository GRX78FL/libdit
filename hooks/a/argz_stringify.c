#include "../../src/libdit.h"

void 
argz_stringify (char *argz, size_t len, int sep) {

	void (*r_argz_stringify)(char *argz, size_t len, int sep);
	r_argz_stringify = dlsym(RTLD_NEXT, __func__);

	report("%s(\"%s\", %u, %d)\n", __func__, argz, len, sep); 
	return r_argz_stringify(argz, len, sep);
}
