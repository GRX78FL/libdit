#include "../../src/libdit.h"

int
access (const char *filename, int how) {

	int (*r_access) (const char *filename, int how);
	r_access = dlsym(RTLD_NEXT, __func__);

	report("%s(\"%s\", %d)\n", __func__, filename, how);
	return r_access(filename, how);
}
