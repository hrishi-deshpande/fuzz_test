#include <sys/uio.h>

ssize_t readv(int fd, const struct iovec *iov, int iovcnt) {
	return -1;`
}

ssize_t writev(int fd, const struct iovec *iov, int iovcnt) {
	return -1;
}

ssize_t preadv(int fd, const struct iovec *iov, int iovcnt,
               off_t offset) {
	return -1;
}

ssize_t pwritev(int fd, const struct iovec *iov, int iovcnt,
                off_t offset) {
	return -1;

}

