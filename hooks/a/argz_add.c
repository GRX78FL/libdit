#include "../../src/libdit.h"

int
argz_add (char **argz, size_t *argz_len, const char *str) {

	int (*r_argz_add)(char **argz, size_t *argz_len, const char *str);
	r_argz_add = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %p, \"%s\")\n", argz, argz_len, str);
	return r_argz_add(argz, argz_len, str);
}
