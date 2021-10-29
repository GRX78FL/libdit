#include "../../src/libdit.h"

char *
bindtextdomain (const char *domainname, const char *dirname) {

	char *(*r_bindtextdomain)(const char *domainname, const char *dirname);
	r_bindtextdomain = dlsym(RTLD_NEXT, __func__);

	report("%s(\"%s\", \"%s\")\n", __func__, domainname, dirname);
	return r_bindtextdomain(domainname, dirname);
}
