#include "../../src/libdit.h"

void
argp_error (const void *state, const char *fmt, ...) {

	va_list args;
	va_start(args, fmt);
	void (*r_argp_error)(const void *state, const char *fmt, ...);
	r_argp_error = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, \"%s\")\n", __func__, state, fmt, args);
	return r_argp_error(state, fmt, args);
}
