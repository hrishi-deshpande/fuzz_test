#include <linux/kexec.h>

long kexec_load(unsigned long entry, unsigned long nr_segments,
                struct kexec_segment *segments, unsigned long flags) {
	return -1;
}

long kexec_file_load(int kernel_fd, int initrd_fd,
                     unsigned long cmdline_len, const char *cmdline,
                     unsigned long flags) {
	return -1;
}


