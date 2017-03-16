#include <keyutils.h>

key_serial_t add_key(const char *type, const char *description,
                     const void *payload, size_t plen,
                     key_serial_t keyring) {
	return -1;
}


key_serial_t request_key(const char *type, const char *description,
                         const char *callout_info,
                         key_serial_t keyring) {

	return -1;
}

long keyctl(int cmd, ...) {
	return -1;
}

