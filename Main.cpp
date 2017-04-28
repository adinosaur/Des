
#include "Des.h"
#include <stdio.h>
#include <assert.h>

int main()
{
	des_init();

	uint64_t p1 = 1, p2, c1;
	c1 = des_encrypt(p1);
	p2 = des_decrypt(c1);

	printf("%016llx\n", c1);
	printf("%016llx\n", p2);
	
	assert(p1 == p2);
	return 0;
}