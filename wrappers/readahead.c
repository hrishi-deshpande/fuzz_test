#define _GNU_SOURCE             /* See feature_test_macros(7) */
#include <fcntl.h>

ssize_t readahead(int fd, off64_t offset, size_t count) {
	return -1;
}
