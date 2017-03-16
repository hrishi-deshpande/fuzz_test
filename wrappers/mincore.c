#include <unistd.h>
#include <sys/mman.h>

int mincore(void *addr, size_t length, unsigned char *vec) {
	return -1;
}

