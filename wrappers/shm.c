#include <sys/types.h>
#include <sys/shm.h>

void *shmat(int shmid, const void *shmaddr, int shmflg) {
	return (void *)-1;
}

int shmdt(const void *shmaddr) {
	return -1;
}


