#include <signal.h>
#include <time.h>

int timer_create(clockid_t clockid, struct sigevent *sevp,
                 timer_t *timerid) {

	return -1;
}

int timer_settime(timer_t timerid, int flags,
                  const struct itimerspec *new_value,
                  struct itimerspec *old_value) {
	return -1;
}

int timer_gettime(timer_t timerid, struct itimerspec *curr_value) {
	return -1;
}

int timer_getoverrun(timer_t timerid) {
	return -1;
}

int timer_delete(timer_t timerid) {
	return -1;
}

int clock_getres(clockid_t clk_id, struct timespec *res) {
	return -1;
}

int clock_gettime(clockid_t clk_id, struct timespec *tp) {
	return -1;
}

int clock_settime(clockid_t clk_id, const struct timespec *tp) {
	return -1;
}

//NOTE: Special error conditions
int clock_nanosleep(clockid_t clock_id, int flags,
                    const struct timespec *request,
                    struct timespec *remain) {

	return EINVAL;
}


