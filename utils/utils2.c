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