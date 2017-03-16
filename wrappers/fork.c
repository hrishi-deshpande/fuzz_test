#include <uinstd.h>
#include <sys/types.h>
#include <sched.h>

int clone(int (*fn)(void *), void *child_stack,
          int flags, void *arg, ...
                 /* pid_t *ptid, struct user_desc *tls, pid_t *ctid */ ) {

	return -1;
}

/* Prototype for the raw system call */

long clone(unsigned long flags, void *child_stack,
           void *ptid, void *ctid,
           struct pt_regs *regs) {

	return -1;
}

pid_t fork(void) {
	return -1;
}

pid_t vfork(void) {
	return -1;

}

//NOTE: always succeeds?
long set_tid_address(int *tidptr) {
	return -1;
}

int unshare(int flags) {
	return -1;
}

