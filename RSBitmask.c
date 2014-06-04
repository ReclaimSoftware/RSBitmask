#include <RSBitmask.h>
#include <stdlib.h>


RSBitmask* RSBitmask_create(uint64_t capacityBits) {
    RSBitmask *bitmask = calloc(sizeof(RSBitmask), 1);
    if (!bitmask) {
        return NULL;
    }

    bitmask->capacityBits = capacityBits;

    uint64_t capacityBytes = (capacityBits / 8) + 1;
    bitmask->data = calloc(capacityBytes, 1);
    if (!bitmask->data) {
        RSBitmask_free(bitmask);
        return NULL;
    }

    return bitmask;
}


void RSBitmask_free(RSBitmask *bitmask) {
    if (bitmask->data) {
        free(bitmask->data);
    }
    free(bitmask);
}


int RSBitmask_get(RSBitmask *bitmask, uint64_t bitIndex) {
    uint64_t byteIndex = bitIndex / 8;
    uint8_t bitIndexInByte = bitIndex % 8;
    uint8_t mask = 1 << bitIndexInByte;
    // bitIndexInByte 0 --> mask 00000001
    // bitIndexInByte 1 --> mask 00000010
    // bitIndexInByte 2 --> mask 00000100
    return (bitmask->data[byteIndex] & mask) >> bitIndexInByte;
}


void RSBitmask_set(RSBitmask *bitmask, uint64_t bitIndex, int value) {
    uint64_t byteIndex = bitIndex / 8;
    uint8_t bitIndexInByte = bitIndex % 8;
    uint8_t mask = 1 << bitIndexInByte;
    uint8_t byte = bitmask->data[byteIndex];
    bitmask->data[byteIndex] = (byte & (~mask)) | (value << bitIndexInByte);
}
