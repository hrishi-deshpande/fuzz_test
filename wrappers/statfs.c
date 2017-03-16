#include <sys/types.h>
#include <unistd.h>    /* libc[45] */
#include <ustat.h>     /* glibc2 */
#include <sys/vfs.h>    /* or <sys/statfs.h> */

int ustat(dev_t dev, struct ustat *ubuf) {
	return -1;
}

int statfs(const char *path, struct statfs *buf) {
	return -1;
}

int fstatfs(int fd, struct statfs *buf) {
	return -1;
}

