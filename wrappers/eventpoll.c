#include <sys/epoll.h>

int epoll_create(int size) {
	return -1;
}

int epoll_create1(int flags) {
	return -1;
}

int epoll_wait(int epfd, struct epoll_event *events,
                      int maxevents, int timeout) {
	return -1;
}
int epoll_pwait(int epfd, struct epoll_event *events,
                int maxevents, int timeout,
                const sigset_t *sigmask) {
	return -1;
}

int epoll_ctl(int epfd, int op, int fd, struct epoll_event *event) {
	return 1;
}

