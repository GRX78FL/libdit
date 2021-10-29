#include "../../src/libdit.h"

int 
argp_parse (const void *argp, int argc, char **argv, unsigned int flags, int *arg_index, void *input) {

	int  (*r_argp_parse)(const void *argp, int argc, char **argv, unsigned int flags, int *arg_index, void *input);
	r_argp_parse = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %d, %p, %d, %p, %p)\n", __func__, argp,argc, argv, flags, arg_index, input);
	return r_argp_parse(argp, argc, argv, flags, arg_index, input);
}
