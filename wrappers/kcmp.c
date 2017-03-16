#include <linux/kcmp.h>

int kcmp(pid_t pid1, pid_t pid2, int type,
         unsigned long idx1, unsigned long idx2) {
	return -1;
}
