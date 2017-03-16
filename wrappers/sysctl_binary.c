#include <unistd.h>
#include <linux/sysctl.h>

int _sysctl(struct __sysctl_args *args) {
	return -1;
}

