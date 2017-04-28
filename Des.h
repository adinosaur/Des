#pragma once

#include <stdint.h>

void des_init();
uint64_t des_encrypt(uint64_t p);
uint64_t des_decrypt(uint64_t c);