#define _BSD_SOURCE      /* See feature_test_macros(7) */
#include <sys/timex.h>

int adjtimex(struct timex *buf) {
	return -1;
}

