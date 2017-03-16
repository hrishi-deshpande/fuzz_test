#include <sys/mman.h>

int mlock(const void *addr, size_t len) {
	return -1;
}

int mlock2(const void *addr, size_t len, int flags) {
	return -1;
}

int munlock(const void *addr, size_t len) {
	return -1;
}

int mlockall(int flags) {
	return -1;
}

int munlockall(void) {
	return -1;
}

