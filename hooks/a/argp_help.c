#include "../../src/libdit.h"

void 
argp_help (const void *argp, void *stream, unsigned int flags, char *name) {

	void (*r_argp_help)(const void *argp, void *stream, unsigned int flags, char *name);
	r_argp_help = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %p, %u, \"%s\")\n", argp, stream, flags, name);
	return r_argp_help(argp, stream, flags, name);
}
