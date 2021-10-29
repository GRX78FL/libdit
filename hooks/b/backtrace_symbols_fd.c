#include "../../src/libdit.h"

char **
backtrace_symbols_fd (void *const *buffer, int size, int fd) {

	char **(*r_backtrace_symbols_fd)(void *const *buffer, int size, int fd);
	r_backtrace_symbols_fd = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %d, %d)\n", __func__, buffer, size, fd);
	return r_backtrace_symbols_fd(buffer, size, fd);
}
