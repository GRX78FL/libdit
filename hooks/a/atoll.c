#include "../../src/libdit.h"

long long int
atoll (const char *string) {

	long long int (*r_atoll)(const char *string);
	r_atoll = dlsym(RTLD_NEXT, __func__);

	report("%s(\"%s\")\n", __func__, string);
	return r_atoll(string);
}
