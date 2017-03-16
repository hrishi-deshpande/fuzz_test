#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

int msgget(key_t key, int msgflg) {
	return -1;
}

int msgsnd(int msqid, const void *msgp, size_t msgsz, int msgflg) {
	return -1;
}

ssize_t msgrcv(int msqid, void *msgp, size_t msgsz, long msgtyp,
               int msgflg) {
	return -1;
}

int msgctl(int msqid, int cmd, struct msqid_ds *buf) {
	return -1;
}

