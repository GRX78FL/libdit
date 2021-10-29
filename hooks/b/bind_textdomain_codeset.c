#include "../../src/libdit.h"

char *
bind_textdomain_codeset (const char *domainname, const char *codeset) {

	char *(*r_bind_textdomain_codeset) (const char *domainname, const char *codeset);
	r_bind_textdomain_codeset = dlsym(RTLD_NEXT, __func__);

	report("%s(\"%s\", \"%s\")\n", __func__, domainname, codeset);
	return r_bind_textdomain_codeset(domainname, codeset);
}
