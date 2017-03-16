#define _GNU_SOURCE             /* See feature_test_macros(7) */
#include <sched.h>

int sched_setparam(pid_t pid, const struct sched_param *param) {
	return -1;
}

int sched_getparam(pid_t pid, struct sched_param *param) {
	return -1;
}

int sched_setscheduler(pid_t pid, int policy,
                       const struct sched_param *param) {
	return -1;
}

int sched_getscheduler(pid_t pid) {
	return -1;
}

int sched_get_priority_max(int policy) {
	return -1;
}

int sched_get_priority_min(int policy) {
	return -1;
}

int sched_rr_get_interval(pid_t pid, struct timespec * tp) {
	return -1;
}

int sched_setaffinity(pid_t pid, size_t cpusetsize,
                      const cpu_set_t *mask) {
	return -1;
}

int sched_getaffinity(pid_t pid, size_t cpusetsize,
                      cpu_set_t *mask) {
	return -1;
}

