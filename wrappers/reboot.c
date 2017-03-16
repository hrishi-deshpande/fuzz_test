#include <unistd.h>
#include <linux/reboot.h>

int reboot(int magic, int magic2, int cmd, void *arg) {
	return -1;
}

int reboot(int cmd) {
	return -1;
}

