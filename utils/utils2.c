#include "../pushswap.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

int	is_sorted(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}
void    ft_error(char *message)
{
    printf("%s", message);
    exit(0);
}
void printList(t_list* head)
{
    t_list* current = head; // Start with the head node
    while (current != NULL) {
        printf("%d\n", current->value); // Print the data in the current node
        current = current->next;       // Move to the next node
    }
}