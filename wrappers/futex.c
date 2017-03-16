#include <linux/futex.h>
#include <sys/time.h>
#include <sys/types.h>
#include <syscall.h>

int futex(int *uaddr, int futex_op, int val,
          const struct timespec *timeout,   /* or: uint32_t val2 */
          int *uaddr2, int val3) {
	return -1;
}

long get_robust_list(int pid, struct robust_list_head **head_ptr,
                            size_t *len_ptr) {
	return -1;
}

long set_robust_list(struct robust_list_head *head, size_t len) {
	return -1;
}

