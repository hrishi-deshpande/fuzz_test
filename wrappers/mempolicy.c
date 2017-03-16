#include <numaif.h>

long mbind(void *addr, unsigned long len, int mode,
           const unsigned long *nodemask, unsigned long maxnode,
           unsigned flags) {
	return -1;
}

long set_mempolicy(int mode, const unsigned long *nodemask,
                   unsigned long maxnode) {
	return -1;
}

int get_mempolicy(int *mode, unsigned long *nodemask,
                  unsigned long maxnode, unsigned long addr,
                  unsigned long flags) {
	return -1;
}

long migrate_pages(int pid, unsigned long maxnode,
                   const unsigned long *old_nodes,
                   const unsigned long *new_nodes) {
	return -1;
}

