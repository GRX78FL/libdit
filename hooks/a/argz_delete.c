#include "../../src/libdit.h"

void 
argz_delete (char **argz, size_t *argz_len, char *entry) {
	
	void (*r_argz_delete)(char **argz, size_t *argz_len, char *entry);
	r_argz_delete = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %p, \"%s\")\n", __func__, argz, argz_len, entry);
	return r_argz_delete(argz, argz_len, entry);
}
