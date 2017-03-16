#include <unistd.h>
#include <sys/utsname.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/sysinfo.h>
#include <sys/times.h>
#include <sys/fsuid.h>
#include <fcntl.h>
#include <sys/prctl.h>
#include <linux/getcpu.h>

int uname(struct utsname *buf) {
	return -1;
}


//This call always succeeds???
mode_t umask(mode_t mask) {
	return mask;
}

int getrlimit(int resource, struct rlimit *rlim) {
	return -1;
}

int setrlimit(int resource, const struct rlimit *rlim) {
	return -1;
}
       
int prlimit(pid_t pid, int resource, const struct rlimit *new_limit,
                   struct rlimit *old_limit) {
	return -1;
}

int getrusage(int who, struct rusage *usage) {
	return -1;
}

int sysinfo(struct sysinfo *info) {
	return -1;
}

clock_t times(struct tms *buf) {
	return (clock_t)-1;
}

//Always successful??
uid_t getuid(void) {
	return 0;
}

uid_t geteuid(void) {
	return 0;
}

int setuid(uid_t uid) {
	return -1;
}

int setgid(gid_t gid) {
	return -1;
}

gid_t getgid(void) {
	return 0;
}

gid_t getegid(void) {
	return 0;
}

int setpgid(pid_t pid, pid_t pgid) {
	return -1;
}

pid_t getpgid(pid_t pid) {
	return -1;
}

//POSIX version
pid_t getpgrp(void) {
	return -1;
}

//BSD version
pid_t getpgrp(pid_t pid) {
	return -1;
}

int setpgrp(void) {
	return -1;
}

int setpgrp(pid_t pid, pid_t pgid) {
	return -1;
}

pid_t setsid(void) {
	return -1;
}

int setreuid(uid_t ruid, uid_t euid) {
	return -1;
}

int setregid(gid_t rgid, gid_t egid) {
	return -1;
}

int setresuid(uid_t ruid, uid_t euid, uid_t suid) {
	return -1;
}

int setresgid(gid_t rgid, gid_t egid, gid_t sgid) {
	return -1;
}

int getresuid(uid_t *ruid, uid_t *euid, uid_t *suid) {
	return -1;
}

int getresgid(gid_t *rgid, gid_t *egid, gid_t *sgid) {
	return -1;
}

int setfsuid(uid_t fsuid) {
	return -1;
}

int setfsgid(uid_t fsgid) {
	return -1;
}	

pid_t getsid(pid_t pid) {

	return (pid_t)-1;
}

int mknod(const char *pathname, mode_t mode, dev_t dev) {
	return -1;
}

int mknodat(int dirfd, const char *pathname, mode_t mode, dev_t dev) {
	return -1;
}

int getpriority(int which, id_t who) {
	return -1;
}

int setpriority(int which, id_t who, int prio) {
	return -1;
}

int prctl(int option, unsigned long arg2, unsigned long arg3,
                 unsigned long arg4, unsigned long arg5)
{
	return -1;
}

int gethostname(char *name, size_t len) {
	return -1;
}

int sethostname(const char *name, size_t len) {
	return -1;
}

int getdomainname(char *name, size_t len) {
	return -1;
}

int setdomainname(const char *name, size_t len) {
	return -1;
}

//Always successful
pid_t gettid(void) {
	return 0;
}

int getcpu(unsigned *cpu, unsigned *node, struct getcpu_cache *tcache) {
	return -1;
}

