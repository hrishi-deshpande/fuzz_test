#include <linux/module.h>

caddr_t create_module(const char *name, size_t size) {
	return -1;
}

int init_module(void *module_image, unsigned long len,
                const char *param_values) {
	return -1;
}

int finit_module(int fd, const char *param_values,
                 int flags) {

	return -1;
}

int delete_module(const char *name, int flags) {
	return -1;
} 

int get_kernel_syms(struct kernel_sym *table) {
	return -1;
}

int query_module(const char *name, int which, void *buf,
                 size_t bufsize, size_t *ret) {
	return -1;
}

