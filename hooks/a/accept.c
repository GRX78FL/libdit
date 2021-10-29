#include "../../src/libdit.h"

int
accept (int socket, void *addr, void *len) {

	int (*r_accept)(int socket, void *addr, void *len);
	r_accept = dlsym(RTLD_NEXT, __func__);

	report("%s(%d, %p, %p)\n", __func__, socket, addr, len);
	return r_accept(socket, addr, len);
}
