#include "merge_sort.h"

/*comprassion functon to sort list elements*/
int comprassion(void *prm1, void *prm2)
{
	if (ft_strcmp((char *) prm1, (char *) prm2) > 0)
		return (1);
	return (0);
}