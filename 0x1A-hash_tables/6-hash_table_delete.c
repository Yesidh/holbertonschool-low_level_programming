#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux = NULL;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			aux = ht->array[i];
			while (aux)
			{
				free(aux->key);
				free(aux->value);
				aux = aux->next;
			}
			free(ht->array[i]);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
