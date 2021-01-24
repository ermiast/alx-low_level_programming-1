#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 on success, 0 on failurre
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

hash_node_t *node;
unsigned long int index = key_index((const unsigned char *)key, ht->size);

node = ht->array[index];

while (node != NULL)
{
	node = node->next;
}

node = malloc(sizeof(hash_node_t));
if (node == NULL)
	return (0);

node->key = strdup(key);
node->value = strdup(value);
node->next = NULL;
ht->array[index] = node;

return (1);
}
