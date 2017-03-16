#include <sys/time.h>
#include <time.h>

int gettimeofday(struct timeval *tv, struct timezone *tz) {
	return -1;
}

int settimeofday(const struct timeval *tv, const struct timezone *tz) {
	return -1;
}

time_t time(time_t *tloc) {
	return (time_t)-1;
}

