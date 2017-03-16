#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <unistd.h>
#include <fcntl.h>
       
void sync(void) {

}

int syncfs(int fd) {
	return -1;
}

int sync_file_range(int fd, off64_t offset, off64_t nbytes,
                    unsigned int flags) {
	return -1;
}

