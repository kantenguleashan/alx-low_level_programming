#include "hash_tables.h"

/**
 * hash_table_print -HASH TABLE
 * @ht: POINTER TO HASH TABLE
 *
 * Description : KEY PRINTED IN ORDER
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int b;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (b = 0; b < ht->size; b++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
