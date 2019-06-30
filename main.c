#include "merge_sort.h"

/*func for adding elements to list*/
void *addtolist(void *str)
{
	char *c;

	c = (char *) ft_strdup(str);
	return (c);
}
/*func for delete element from list*/
void dellist(void **cont)
{
	ft_memdel(&(*cont));
}
/*func for print content from list*/
void printelem(void *content)
{
	char *cont;

	cont = ft_strdup((char *)content);
	ft_putendl(cont);
	ft_strdel(&cont);
}
/*func for printing all list*/
void printlist(t_imp *lst)
{
	t_imp *buf;

	buf = lst;
	ft_putendl("List_out:");
	while (buf)
	{
	printelem(buf->content);
	buf = buf->next;
	}
}
/*split list by 2 half parts*/

int main()
{
	t_imp *list;

	list = ft_impnew("test2", addtolist);
	ft_impadd(&list,ft_impnew("test4", addtolist));
	ft_impadd(&list,ft_impnew("test5", addtolist));
	ft_impadd(&list,ft_impnew("test3", addtolist));
	ft_impadd(&list,ft_impnew("test1", addtolist));
	ft_impadd(&list,ft_impnew("test3", addtolist));
	ft_impadd(&list,ft_impnew("test8", addtolist));
	ft_impadd(&list,ft_impnew("test9", addtolist));
	ft_impadd(&list,ft_impnew("test0", addtolist));
	ft_impadd(&list,ft_impnew("test7", addtolist));
	ft_impadd(&list,ft_impnew("test6", addtolist));
	ft_putendl("#####################BEFORE###################");
	printlist(list);
	list = sortlist(list, ft_impsize(list));
	ft_putendl("#####################AFTER###################");
	printlist(list);
	while (list)
		ft_impdel(&list, dellist);
	return (0);
}