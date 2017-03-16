#include <sys/io.h>

int iopl(int level) {
	return -1;
}

int ioperm(unsigned long from, unsigned long num, int turn_on) {
	return -1;
}

