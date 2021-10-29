#include "../../src/libdit.h"

int
addseverity (int severity, const char *string) {

	int (*r_addseverity)(int severity, const char *string);
	r_addseverity = dlsym(RTLD_NEXT, __func__);

	report("%s(%d, \"%s\")\n", severity, string);
	return r_addseverity(severity, string);
}
