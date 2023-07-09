#include "main.h"
/**
 * get_endianness - the function
 *
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void) {
  int endianness;
  union {
    unsigned int i;
    char c[4];
  } u;
  u.i = 1;
  endianness = u.c[0] == 1;
  return endianness;
}
