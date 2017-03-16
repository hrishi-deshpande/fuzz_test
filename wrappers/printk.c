#include <unistd.h>
/* The glibc interface */
#include <sys/klog.h>

int syslog(int type, char *bufp, int len) {
	return -1;
}

int klogctl(int type, char *bufp, int len) {
	return -1;
}
