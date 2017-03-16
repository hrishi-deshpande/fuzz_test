#include <sys/timerfd.h>

int timerfd_create(int clockid, int flags) {
	return -1;
}

int timerfd_settime(int fd, int flags,
                    const struct itimerspec *new_value,
                    struct itimerspec *old_value) {
	return -1;
}

int timerfd_gettime(int fd, struct itimerspec *curr_value) {
	return -1;
}
