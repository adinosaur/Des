#pragma once

#include <stdint.h>

void des_init();

void des_encrypt_uint64(uint64_t* c, const uint64_t* p);
void des_decrypt_uint64(uint64_t* p, const uint64_t* c);

void des_encrypt_bytes(uint8_t* c, const uint8_t* p, int sz);
void des_decrypt_bytes(uint8_t* p, const uint8_t* c, int sz);