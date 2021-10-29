#include "libdit.h"

void *
get_fp (const char *filename, const char *mode) {

	void *(*r_fopen)(const char *filename, const char *mode);
	r_fopen = dlsym(RTLD_NEXT, "fopen");

	return r_fopen(filename, mode);
}

int
close_fp (void *fp) {
	
	int (*r_fclose)(void *fp);
	r_fclose = dlsym(RTLD_NEXT, "fclose");

	return r_fclose(fp);
}
	
	
void 
report (const char *format, ...) {

	void *fp;
	va_list args;
	int (*r_vfprintf)(void *fp, const char *format, va_list args);	
	
	va_start (args, format);
	r_vfprintf = dlsym(RTLD_NEXT, "vfprintf");
	
	if ((fp = get_fp(LOG_PATH, "a")) == NULL) {
		return;
	}

	r_vfprintf(fp, format, args);
	close_fp(fp);
	return;
}

