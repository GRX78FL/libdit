#include "../../src/libdit.h"

unsigned int
alarm (unsigned int seconds) {

	int (*r_alarm)(unsigned int seconds);
	r_alarm = dlsym(RTLD_NEXT, __func__);

	report("%s(%d)\n", __func__, seconds);
	return r_alarm(seconds);
}
