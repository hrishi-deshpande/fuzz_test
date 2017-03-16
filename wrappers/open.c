#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int open(const char *pathname, int flags) {
	return -1;
}

int open(const char *pathname, int flags, mode_t mode) {
	return -1;
}

int creat(const char *pathname, mode_t mode) {
	return -1;
}

int openat(int dirfd, const char *pathname, int flags) {
	return -1;

}

int openat(int dirfd, const char *pathname, int flags, mode_t mode) {
	return -1;

}

int truncate(const char *path, off_t length) {
	return -1;

}

int ftruncate(int fd, off_t length) {
	return -1;
}

int chdir(const char *path) {
	return -1;
}

int fchdir(int fd) {
	return -1;
}

int chmod(const char *pathname, mode_t mode) {
	return -1;
}

int fchmod(int fd, mode_t mode) {
	return -1;
}

int fchmodat(int dirfd, const char *pathname, mode_t mode, int flags) {
	return -1;
}

int chown(const char *pathname, uid_t owner, gid_t group) {
	return -1;
}
int fchown(int fd, uid_t owner, gid_t group) {
	return -1;
}

int lchown(const char *pathname, uid_t owner, gid_t group) {
	return -1;
}

int fchownat(int dirfd, const char *pathname,
             uid_t owner, gid_t group, int flags) {
	return -1;
}

int vhangup(void) {
	return -1;
}

int chroot(const char *path) {
	return -1;
}

int fallocate(int fd, int mode, off_t offset, off_t len) {
	return -1;
}

