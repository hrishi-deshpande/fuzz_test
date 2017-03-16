#define _GNU_SOURCE             /* See feature_test_macros(7) */
#include <unistd.h>
#include <fcntl.h>              /* Obtain O_* constant definitions */

int pipe(int pipefd[2]) {
	return -1;
}


int pipe2(int pipefd[2], int flags) {

	return -1;
}
