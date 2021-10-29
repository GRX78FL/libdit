#include "../../src/libdit.h"

char *
basename (const char *filename) {

	char *(*r_basename)(const char *filename);
	r_basename = dlsym(RTLD_NEXT, __func__);

	report("%s(\"%s\")\n", __func__, filename);
	return r_basename(filename);
}
