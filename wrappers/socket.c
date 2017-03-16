#define _GNU_SOURCE             /* See feature_test_macros(7) */
#include <sys/types.h>          /* See NOTES */
#include <sys/socket.h>

int socket(int domain, int type, int protocol) {
	return -1;	
}

int connect(int sockfd, const struct sockaddr *addr,
                   socklen_t addrlen) {
	return -1;
}

int bind(int sockfd, const struct sockaddr *addr,
         socklen_t addrlen) {

	return -1;
}

int accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen) {
	return -1;
}

int accept4(int sockfd, struct sockaddr *addr,
            socklen_t *addrlen, int flags) {
	return -1;
}


ssize_t send(int sockfd, const void *buf, size_t len, int flags) {
	return -1;
}

ssize_t sendto(int sockfd, const void *buf, size_t len, int flags,
                      const struct sockaddr *dest_addr, socklen_t addrlen) {
	return -1;
}

ssize_t sendmsg(int sockfd, const struct msghdr *msg, int flags) {
	return -1;
}

ssize_t recv(int sockfd, void *buf, size_t len, int flags) {
	return -1;
}

ssize_t recvfrom(int sockfd, void *buf, size_t len, int flags,
                 struct sockaddr *src_addr, socklen_t *addrlen) {
	return -1;
}

ssize_t recvmsg(int sockfd, struct msghdr *msg, int flags) {
	return -1;
}

int shutdown(int sockfd, int how) {
	return -1;
}

int listen(int sockfd, int backlog) {
	return -1;

}

int getsockname(int sockfd, struct sockaddr *addr, socklen_t *addrlen) {
	return -1;
}

int getpeername(int sockfd, struct sockaddr *addr, socklen_t *addrlen) {
	return -1;

}

int socketpair(int domain, int type, int protocol, int sv[2]) {
	return -1;
}

int getsockopt(int sockfd, int level, int optname,
                      void *optval, socklen_t *optlen) {
	return -1;
}
int setsockopt(int sockfd, int level, int optname,
                      const void *optval, socklen_t optlen) {

	return -1;
}

int recvmmsg(int sockfd, struct mmsghdr *msgvec, unsigned int vlen,
             unsigned int flags, struct timespec *timeout) {
	return -1;
}

int sendmmsg(int sockfd, struct mmsghdr *msgvec, unsigned int vlen,
             unsigned int flags) {

	return -1;
}



