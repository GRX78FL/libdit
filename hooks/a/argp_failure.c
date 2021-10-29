#include "../../src/libdit.h"

void
argp_failure (const void *state, const char *fmt, ...) {

	va_list args;
	va_start(args, fmt);
	void (*r_argp_failure)(const void *state, const char *fmt, ...);
	r_argp_failure = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, \"%s\"\n)", state, fmt);
	return r_argp_failure(state, fmt, args);
}
