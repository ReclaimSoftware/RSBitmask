**A simple bitmask library**

```c
typedef struct {
  uint64_t capacityBits;
  uint8_t *data;
} RSBitmask;

RSBitmask*  RSBitmask_create(uint64_t capacityBits);
void        RSBitmask_free(RSBitmask *bitmask);

int         RSBitmask_get(RSBitmask *bitmask, uint64_t bitIndex);
void        RSBitmask_set(RSBitmask *bitmask, uint64_t bitIndex, int value);
```

### [License: MIT](LICENSE.txt)
