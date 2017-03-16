#include <unistd.h>

int getdents(unsigned int fd, struct linux_dirent *dirp,
             unsigned int count) {
	return -1;
}

int getdents64(unsigned int fd, struct linux_dirent64 *dirp,
               unsigned int count) {
	return -1;
}

