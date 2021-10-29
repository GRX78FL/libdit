#include "../../src/libdit.h"

char 
*argz_next (const char *argz, size_t argz_len, const char *entry) {

	char *(*r_argz_next)(const char *argz, size_t argz_len, const char *entry);
	r_argz_next = dlsym(RTLD_NEXT, __func__);

	report("%s(\"%s\", %u, \"%s\")\n", __func__, argz, argz_len, entry);
	return r_argz_next(argz, argz_len, entry);
}
