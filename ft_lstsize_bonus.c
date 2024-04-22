#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while(lst->content)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}