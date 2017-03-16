#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <fcntl.h>           /* Definition of AT_* constants */
#include <sys/stat.h>

int stat(const char *pathname, struct stat *buf) {
	return -1;
}

int fstat(int fd, struct stat *buf) {
	return -1;
}

int lstat(const char *pathname, struct stat *buf) {
	return -1;

}

int fstatat(int dirfd, const char *pathname, struct stat *buf,
            int flags) {
	return -1;
}

ssize_t readlink(const char *pathname, char *buf, size_t bufsiz) {
	return -1;
}

ssize_t readlinkat(int dirfd, const char *pathname,
                   char *buf, size_t bufsiz) {
	return -1;
}

