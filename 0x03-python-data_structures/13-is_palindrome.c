#inclure « lists.h »

/**
 * reverse - inverse la deuxième moitié de la liste
 *
 * @h_r : tête du second semestre
 * Retour: pas de retour
 */
annulation inversée(listint_t **h_r)
{
	listint_t *prv;
	listint_t *crr;
	listint_t *nxt;

	prv = NULL;
	crr = *h_r;

	while (crr != NULL)
	{
 nxt = crr->suivant;
		crr->next = prv;
		prv = crr;
		crr = nxt;
	}

	*h_r = prv;
}

/**
 * comparer - compare chaque int de la liste
 *
 * @h1 : tête du premier semestre
 * @h2 : tête du second semestre
 * Retour: 1 si sont égaux, 0 si non
 */
int compare(listint_t *h1, listint_t *h2)
{
	listint_t *tmp1;
	listint_t *tmp2;

	tmp1 = h1;
	tmp2 = h2;

	tandis que (tmp1 != NULL && tmp2 != NULL)
	{
		if (tmp1->n == tmp2->n)
		{
 tmp1 = tmp1->suivant;
 tmp2 = tmp2->suivant;
		}
		autre
		{
			retour (0);
		}
	}

	if (tmp1 == NULL && tmp2 == NULL)
	{
		retour (1);
	}

	retour (0);
}

/**
 * is_palindrome - vérifie si une liste liée individuellement
 * est un palindrome
 * @head : pointeur vers la tête de liste
 * Retour: 0 s’il ne s’agit pas d’un palindrome,
 * 1 s’il s’agit d’un palndrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow, *fast, *prev_slow;
	listint_t *scn_half, *middle;
	int isp;

	slow = fast = prev_slow = *head;
	middle = NULL;
	isp = 1;

	if (*head != NULL && (*head)->next != NULL)
	{
		while (fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			prev_slow = slow;
			slow = slow->next;
		}

		if (rapide != NULL)
		{
 moyen = lent;
 lent = lent->suivant;
		}

 scn_half = lent;
 prev_slow->suivant = NULL;
		inverse(&scn_half);
 isp = comparer(*head, scn_half);

		if (milieu != NULL)
		{
 prev_slow->suivant = milieu;
			middle->next = scn_half;
		}
		autre
		{
 prev_slow->suivant = scn_half;
		}
	}

	retour (FAI);
}
