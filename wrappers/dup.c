#define _GNU_SOURCE             /* See feature_test_macros(7) */
#include <fcntl.h>              /* Obtain O_* constant definitions */
#include <unistd.h>

int dup(int oldfd) {
	return -1;
}
int dup2(int oldfd, int newfd) {
	return -1;
}

int dup3(int oldfd, int newfd, int flags) {
	return -1;
}
