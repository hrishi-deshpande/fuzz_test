#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <mqueue.h>
#include <time.h>

mqd_t mq_open(const char *name, int oflag) {
	return (mqd_t) -1;
}

mqd_t mq_open(const char *name, int oflag, mode_t mode,
              struct mq_attr *attr) {
	return (mqd_t) -1;
}

int mq_unlink(const char *name) {
	return -1;
}

int mq_send(mqd_t mqdes, const char *msg_ptr,
            size_t msg_len, unsigned int msg_prio) {

	return -1;
}

int mq_timedsend(mqd_t mqdes, const char *msg_ptr,
                 size_t msg_len, unsigned int msg_prio,
                 const struct timespec *abs_timeout) {
	return -1;
}

ssize_t mq_receive(mqd_t mqdes, char *msg_ptr,
                   size_t msg_len, unsigned int *msg_prio) {

	return -1;
}

ssize_t mq_timedreceive(mqd_t mqdes, char *msg_ptr,
                        size_t msg_len, unsigned int *msg_prio,
                        const struct timespec *abs_timeout) {
	return -1;
}

int mq_notify(mqd_t mqdes, const struct sigevent *sevp) {
	return -1;
}

int mq_getsetattr(mqd_t mqdes, struct mq_attr *newattr,
                   struct mq_attr *oldattr) {
	return -1;
}
