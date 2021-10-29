#include "../../src/libdit.h"

char **
backtrace_symbols (void *const *buffer, int size) {

	char **(*r_backtrace_symbols)(void *const *buffer, int size);
	r_backtrace_symbols = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %d)\n", __func__, buffer, size);
	return r_backtrace_symbols(buffer, size);
}
