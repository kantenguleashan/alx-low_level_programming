#include "hash_tables.h"

/**
 * key_index - GET THE INDEX.
 * @key: THE KEY TO GE TO INDEX
 * @size: ARRAY SIZE
 *
 * Return:  INDEX KEY
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
