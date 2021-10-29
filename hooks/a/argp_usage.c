#include "../../src/libdit.h"

void
argp_usage (const void *state) {

	void (*r_argp_usage)(const void *state);
	r_argp_usage = dlsym(RTLD_NEXT, __func__);

	report("%s(%p)\n", __func__, state);
	return r_argp_usage(state);
}
