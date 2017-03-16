#include <linux/nfsd/syscall.h>

long nfsservctl(int cmd, struct nfsctl_arg *argp,
                union nfsctl_res *resp) {
	return -1;
}


