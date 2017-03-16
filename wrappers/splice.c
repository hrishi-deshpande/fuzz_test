#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <fcntl.h>
#include <sys/uio.h>

ssize_t splice(int fd_in, loff_t *off_in, int fd_out,
               loff_t *off_out, size_t len, unsigned int flags) {
	return -1;
}

ssize_t tee(int fd_in, int fd_out, size_t len, unsigned int flags) {
	return -1;
}

ssize_t vmsplice(int fd, const struct iovec *iov,
                 unsigned long nr_segs, unsigned int flags) {
	return -1;
}
