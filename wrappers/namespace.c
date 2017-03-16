#include <sys/mount.h>

int pivot_root(const char *new_root, const char *put_old) {
	return -1;
}


int mount(const char *source, const char *target,
          const char *filesystemtype, unsigned long mountflags,
          const void *data) {
	return -1;
}

int umount(const char *target) {
	return -1;
}

int umount2(const char *target, int flags) {
	return -1;
}

