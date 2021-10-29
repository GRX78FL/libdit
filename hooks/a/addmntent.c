#include "../../src/libdit.h"

int
addmntent (void *stream, const void *mnt) {

	int (*r_addmntent)(void *stream, const void *mnt);
	r_addmntent = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, %p)\n", __func__, stream, mnt);
	return r_addmntent(stream, mnt);
}
