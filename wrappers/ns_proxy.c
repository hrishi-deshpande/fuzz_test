#define _GNU_SOURCE             /* See feature_test_macros(7) */
#include <sched.h>

int setns(int fd, int nstype) {
	return -1;
}
