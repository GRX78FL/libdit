#include "../../src/libdit.h"

int
argz_create_sep (const char *string, int sep, char **argz, size_t *argz_len) {

	int (*r_argz_create_sep)(const char *string, int sep, char **argz, size_t *argz_len);
	r_argz_create_sep = dlsym(RTLD_NEXT, __func__);

	report("%s(\"%s\", %d, %p, %p)\n", string, sep, argz, argz_len);
	return r_argz_create_sep(string, sep, argz, argz_len);
}
