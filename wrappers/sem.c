#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

int semget(key_t key, int nsems, int semflg) {
	return -1;
}



int semop(int semid, struct sembuf *sops, size_t nsops) {
	return -1;
}

int semtimedop(int semid, struct sembuf *sops, size_t nsops,
               const struct timespec *timeout) {
	return -1;

}


int semctl(int semid, int semnum, int cmd, ...) {
	return -1;

}

