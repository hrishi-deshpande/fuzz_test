#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <poll.h>
#include <signal.h>

int poll(struct pollfd *fds, nfds_t nfds, int timeout) {
	return -1;
}


int ppoll(struct pollfd *fds, nfds_t nfds,
          const struct timespec *tmo_p, const sigset_t *sigmask) {
	return -1;

}
