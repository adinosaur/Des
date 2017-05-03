
#include "Des.h"
#include <stdio.h>
#include <assert.h>

uint8_t buf1[] = "abcdefghijklnmopqrstuvwxyzABCDEFGHIJKLNMOPQRSTUVWXYZ0123456789";
uint8_t buf2[64];
uint8_t buf3[64];

int main()
{
	size_t sz = sizeof(buf1);

	des_init();

	des_encrypt_bytes(buf2, buf1, sz);
	des_decrypt_bytes(buf3, buf2, 64);

	printf("%s\n", (char*)buf3);

	return 0;
}