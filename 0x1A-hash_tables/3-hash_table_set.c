#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hast table to add or update the key/value
 * @key: the key
 * @value: associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL, *aux = NULL;

	if (ht == NULL)
		return (0);
	if (strcmp(key,  "") == 0 || strcmp(value, "") == 0)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	aux = ht->array[index];
	if (ht->array[index] != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
			ht->array[index]->value = strdup(value);
		else
		{
			while (aux->next != NULL)
			{
				if (strcmp(key, aux->key) == 0)
					ht->array[index]->value = strdup(value);
				aux = aux->next;
			}
		}
		return (1);
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (ht->array[index] == NULL)
	{
		node->next = NULL;
		ht->array[index] = node;
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
