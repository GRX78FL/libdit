#include "../../src/libdit.h"

int 
argz_create (char *const *argv, char **argz, size_t *argz_len) {
	
	int (*r_argz_create)(char *const *argv, char **argz, size_t *argz_len);
	r_argz_create = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %p, %p)\n", __func__, argv, argz, argz_len);
	return r_argz_create(argv, argz, argz_len);
}
