#include "../../src/libdit.h"

char *asctime (const void *brokentime) {

	char *(*r_asctime)(const void *brokentime);
	r_asctime = dlsym(RTLD_NEXT, __func__);

	report("%s(%p)\n", __func__, brokentime);
	return r_asctime(brokentime);
}
