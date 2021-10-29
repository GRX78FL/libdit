#include "../../src/libdit.h"

void 
argz_extract (const char *argz, size_t argz_len, char **argv) {

	void (*r_argz_extract)(const char *argz, size_t argz_len, char **argv);
	r_argz_extract = dlsym(RTLD_NEXT, __func__);

	report("%s(\"%s\", %u, %p)\n", __func__, argz, argz_len, argv);
	return r_argz_extract(argz, argz_len, argv);
}
