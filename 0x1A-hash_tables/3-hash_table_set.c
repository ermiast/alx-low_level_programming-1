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
hash_node_t *new_node;
unsigned long int index;

if (ht == NULL || *key == '\n' || *value == '\n')
	return (0);

index = key_index((const unsigned char *)key, ht->size);

node = ht->array[index];

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
	return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = NULL;

if (node == NULL)
{
	ht->array[index] = new_node;
}
else
{
	while (node->next != NULL)
		node = node->next;
	node->next = new_node;
}

return (1);
}
