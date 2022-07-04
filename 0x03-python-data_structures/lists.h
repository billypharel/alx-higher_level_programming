#ifndef LISTS_H
#définir LISTS_H

#inclure <stdlib.h>

/**
 * struct listint_s - liste liée individuellement
 * @n : entier
 * @next : pointe vers le nœud suivant
 *
 * Description: structure de nœud de liste liée individuellement
 * pour le projet Holberton
 */
typedef struct listint_s
{
	int n;
	struct listint_s *suivant;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
free_listint nul (listint_t *tête);

int is_palindrome(listint_t **tête);

#endif /* LISTS_H */
