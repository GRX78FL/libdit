#include "../../src/libdit.h"

int 
asprintf (char **ptr, const char *template, ...) {
	
	va_list args;
	va_start(args, template);
	int (*r_asprintf)(char **ptr, const char *template, ...);
	r_asprintf = dlsym(RTLD_NEXT, __func__);

	report("%s(%p, \"%s\", %s)\n", __func__, ptr, template, args);
	return r_asprintf(ptr, template, args);
}
