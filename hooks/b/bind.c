#include "../../src/libdit.h"

int 
bind (int socket, void *addr, unsigned int length) {

	int (*r_bind)(int socket, void *addr, unsigned int length);
	r_bind = dlsym(RTLD_NEXT, __func__);

	report("%s(%d, %p, %u)\n", __func__, socket, addr, length);
	return r_bind(socket, addr, length);
}
