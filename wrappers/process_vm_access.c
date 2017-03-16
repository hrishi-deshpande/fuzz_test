#include <sys/uio.h>

ssize_t process_vm_readv(pid_t pid,
                        const struct iovec *local_iov,
                        unsigned long liovcnt,
                        const struct iovec *remote_iov,
                        unsigned long riovcnt,
                        unsigned long flags) {
	return -1;
}

ssize_t process_vm_writev(pid_t pid,
                          const struct iovec *local_iov,
                          unsigned long liovcnt,
                          const struct iovec *remote_iov,
                          unsigned long riovcnt,
                          unsigned long flags) {
	return -1;
}

