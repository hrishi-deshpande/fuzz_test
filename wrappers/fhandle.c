#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int name_to_handle_at(int dirfd, const char *pathname,
                      struct file_handle *handle,
                      int *mount_id, int flags) {
	return -1;
}

int open_by_handle_at(int mount_fd, struct file_handle *handle,
                      int flags) {
	return -1;
}
