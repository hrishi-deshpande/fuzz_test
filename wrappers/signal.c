#include <sys/types.h>
#include <signal.h>

int kill(pid_t pid, int sig) {
	return -1;
}

int sigpending(sigset_t *set) {
	return -1;
}

int sigwaitinfo(const sigset_t *set, siginfo_t *info) {
	return -1;
}

int sigtimedwait(const sigset_t *set, siginfo_t *info,
                 const struct timespec *timeout) {

	return -1;
}

int rt_sigqueueinfo(pid_t tgid, int sig, siginfo_t *uinfo) {
	return -1;
}

int rt_tgsigqueueinfo(pid_t tgid, pid_t tid, int sig,
                      siginfo_t *uinfo) {
	return -1;
}

int sigsuspend(const sigset_t *mask) {
	return -1;
}

int sigaltstack(const stack_t *ss, stack_t *oss) {
	return -1;
}

int tkill(int tid, int sig) {
	return -1;
}

int tgkill(int tgid, int tid, int sig) {
	return -1;
}


int restart_syscall(void) {
	return -1;
}

