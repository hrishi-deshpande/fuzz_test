#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <sys/mman.h>

int remap_file_pages(void *addr, size_t size, int prot,
                     size_t pgoff, int flags) {
	return -1;
}

