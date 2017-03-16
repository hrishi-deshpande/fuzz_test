#include <linux/aio_abi.h>          /* Defines needed types */

//NOTE: cross confirm the return value
int io_setup(unsigned nr_events, aio_context_t *ctx_idp) {
	return -1;
}

int io_destroy(aio_context_t ctx_id) {
	return -1;
}

int io_getevents(aio_context_t ctx_id, long min_nr, long nr,
                 struct io_event *events, struct timespec *timeout) {
	return -1;
}

int io_submit(aio_context_t ctx_id, long nr, struct iocb **iocbpp) {
	return -1;
}

int io_cancel(aio_context_t ctx_id, struct iocb *iocb,
              struct io_event *result) {
	return -1;
}
