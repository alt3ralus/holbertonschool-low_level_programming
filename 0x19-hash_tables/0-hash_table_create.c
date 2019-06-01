#include "hash_tables.h"
/**
 *
 *
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *index = NULL;

	if (size == 0)
		return (NULL);

	index = malloc(sizeof(hash_table_t));

	if (index == NULL)
		return (NULL);


	index->size = size;
	index->array = malloc(sizeof(hash_node_t *)* size);

	if (index->array == NULL)
		return (NULL);

	return(index);


}
