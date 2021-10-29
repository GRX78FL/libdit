#include "../../src/libdit.h"

char *
asctime_r (const void *brokentime, char *buffer) {

	char *(*r_asctime_r)(const void *brokentime, char *buffer);
	r_asctime_r = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, \"%s\")\n", __func__, brokentime, buffer);
	return r_asctime_r(brokentime, buffer);
}
