#include "../../src/libdit.h"

void
argp_state_help (const void *state, void *stream) {

	void (*r_argp_state_help)(const void *state, void *stream);
	r_argp_state_help = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %p)\n");
	return r_argp_state_help(state, stream);
}
