#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct listp_s - singly linked list
 * @p: pointers of nodes
 * @next: points to the next node
 *
 * Description: singly linked list of pointers
 */

