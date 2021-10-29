#include "../../src/libdit.h"

int
argz_append (char **argz, size_t *argz_len, const char *buf, size_t buf_len) {

	int (*r_argz_append) (char **argz, size_t *argz_len, const char *buf, size_t buf_len);
	r_argz_append = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %p, \"%s\", %u)\n", argz, argz_len, buf, buf_len);
	return r_argz_append(argz, argz_len, buf, buf_len);
}
