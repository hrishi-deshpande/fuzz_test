#include <fcntl.h>
#include <sys/fanotify.h>

int fanotify_init(unsigned int flags, unsigned int event_f_flags) {
	return -1;
}

int fanotify_mark(int fanotify_fd, unsigned int flags,
                  uint64_t mask, int dirfd, const char *pathname) {
	return -1;
}

