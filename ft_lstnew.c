

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*lst;
	void		*cnt;

	cnt = NULL;
	lst = NULL;
	if(!((t_list *)malloc(sizeof(t_list) * content_size)))
		return (NULL);
	if (content)
	{
		if ((cnt = malloc(sizeof(void) * content_size)))
			lst->content = cnt;
		else
			content_size = 0;
	}
	lst->content_size = content_size;
	lst->next = NULL;
	return (lst);
}
