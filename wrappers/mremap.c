#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <sys/mman.h>

void *mremap(void *old_address, size_t old_size,
             size_t new_size, int flags, ... /* void *new_address */) {

	return  MAP_FAILED;
}
