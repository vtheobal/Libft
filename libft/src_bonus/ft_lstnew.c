#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (elem);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
