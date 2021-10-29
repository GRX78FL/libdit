#include "../../src/libdit.h"

size_t 
argz_count (const char *argz, size_t argz_len) {

	size_t (*r_argz_count)(const char *argz, size_t argz_len);
	r_argz_count = dlsym(RTLD_NEXT, __func__);

	report("%s(\"%s\", %u)\n", __func__, argz, argz_len);
	return r_argz_count(argz, argz_len);
}
