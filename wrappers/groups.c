#include <sys/types.h>
#include <unistd.h>
#include <grp.h>

int getgroups(int size, gid_t list[]) {
	return -1;
}

int setgroups(size_t size, const gid_t *list) {
	return -1;
}
