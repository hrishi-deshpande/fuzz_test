#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>           /* Definition of AT_* constants */
#include <stdio.h>

#include <sys/stat.h>
#include <sys/types.h>

int rename(const char *oldpath, const char *newpath) {
	return -1;

}


int renameat(int olddirfd, const char *oldpath,
                    int newdirfd, const char *newpath) {
	return -1;
}

int renameat2(int olddirfd, const char *oldpath,
              int newdirfd, const char *newpath, unsigned int flags) {
	return -1;
}

int mkdir(const char *pathname, mode_t mode) {
	return -1;
}

int mkdirat(int dirfd, const char *pathname, mode_t mode) {
	return -1;
}


int link(const char *oldpath, const char *newpath) {
	return -1;
}


int linkat(int olddirfd, const char *oldpath,
           int newdirfd, const char *newpath, int flags) {
	return -1;
}

int unlink(const char *pathname) {
	return -1;
}

int unlinkat(int dirfd, const char *pathname, int flags) {
	return -1;
}

int symlink(const char *target, const char *linkpath) {
	return -1;
}

int symlinkat(const char *target, int newdirfd, const char *linkpath) {
	return -1;
}

