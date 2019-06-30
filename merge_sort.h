#ifndef MERGE_SORT_H
# define MERGE_SORT_H

# include "libft.h"

int comprassion(void *prm1, void *prm2);
t_imp *sortlist(t_imp *lst, int cnt, int (*compr)(void *, void *));


#endif