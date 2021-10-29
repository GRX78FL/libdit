#include "../../src/libdit.h"

int
atoi (const char *string) {

	int (*r_atoi)(const char *string);
	r_atoi = dlsym(RTLD_NEXT, __func__);

	report("%s(\"%s\")\n", __func__, string);
	return r_atoi(string);
}
