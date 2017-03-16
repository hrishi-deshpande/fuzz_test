#include <unistd.h>

#include <fcntl.h>           /* Definition of AT_* constants */
#include <unistd.h>

int access(const char *pathname, int mode) {
	return -1;
}

int faccessat(int dirfd, const char *pathname, int mode, int flags) {
	return -1;
}
