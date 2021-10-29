#include "../../src/libdit.h"

int 
argz_insert (char **argz, size_t *argz_len, char *before, const char *entry) {

	int (*r_argz_insert)(char **argz, size_t *argz_len, char *before, const char *entry);
	r_argz_insert = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %p, \"%s\", \"%s\")\n", __func__, argz, argz_len, before, entry);
	return r_argz_insert(argz, argz_len, before, entry);
}
