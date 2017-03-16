#include <sys/types.h>
#include <utime.h>
#include <sys/time.h>
#include <sys/stat.h>

int utime(const char *filename, const struct utimbuf *times) {
	return -1;
}

int utimes(const char *filename, const struct timeval times[2]) {
	return -1;
}

int futimesat(int dirfd, const char *pathname,
              const struct timeval times[2]) {
	return -1;
}


int utimensat(int dirfd, const char *pathname,
              const struct timespec times[2], int flags) {
	return -1;
}

int futimens(int fd, const struct timespec times[2]) {
	return -1;
}

