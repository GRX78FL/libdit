#include "../../src/libdit.h"

int
argz_replace (char **argz, size_t *argz_len, const char *str, const char *with, unsigned int *replace_count) {

	int (*r_argz_replace)(char **argz, size_t *argz_len, const char *str, const char *with, unsigned int *replace_count);
	r_argz_replace = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %p, \"%s\", \"%s\", %u)\n", __func__, argz, argz_len, str, with, replace_count);
	return r_argz_replace(argz, argz_len, str, with, replace_count);
}
