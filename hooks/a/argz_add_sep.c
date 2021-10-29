#include "../../src/libdit.h"

int
argz_add_sep (char **argz, size_t *argz_len, const char *str, int delim) {

	int (*r_argz_add_sep) (char **argz, size_t *argz_len, const char *str, int delim);
	r_argz_add_sep = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %p, \"%s\", %d", argz, argz_len, str, delim);
	return r_argz_add_sep(argz, argz_len, str, delim);
}
