#ifndef SHAKE128_H
#define SHAKE128_H

#define SHAKE128_RATE 168
#define SHA3_256_RATE 136

extern void shake128_absorb(uint64_t *s, const unsigned char *input, unsigned int inputByteLen);

extern void shake128_squeezeblocks(unsigned char *output, unsigned long long nblocks, uint64_t *s);

extern void shake128(unsigned char *output, unsigned int outputByteLen, const unsigned char *input, unsigned int inputByteLen);

extern void sha3256(unsigned char *output, const unsigned char *input, unsigned int inputByteLen);

#endif