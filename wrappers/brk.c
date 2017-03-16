#include <unistd.h>

int brk(void *addr) {
	return -1;
}

void *sbrk(rrnintptr_t increment) {
	return NULL;

}

