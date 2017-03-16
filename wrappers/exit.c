#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/wait.h>

 
void _exit(int status) {

}

void _Exit(int status) {

}

pid_t wait3(int *status, int options,
            struct rusage *rusage) {
	return -1;
}

pid_t wait4(pid_t pid, int *status, int options,
            struct rusage *rusage) {
	return -1;
}

//This system call does not return
void exit_group(int status) {

}

pid_t wait(int *status) {
	return -1;
}

pid_t waitpid(pid_t pid, int *status, int options); {
	return -1;
}

int waitid(idtype_t idtype, id_t id, siginfo_t *infop, int options) {
	return -1;
}


