#include <sys/inotify.h>
       
int inotify_init(void) {
	return -1;
}

int inotify_init1(int flags) {
	return -1;
}

int inotify_add_watch(int fd, const char *pathname, uint32_t mask) {
	return -1;
}

int inotify_rm_watch(int fd, int wd) {
	return -1;
}

