#include <asm/prctl.h>
#include <sys/prctl.h>

int arch_prctl(int code, unsigned long addr) {
	return -1;
}

int arch_prctl(int code, unsigned long *addr) {
	return -1;
}
