struct node *search_list(struct node *list, int n)
{
	struct node *p;
	for(p = list; p != NULL; p = p->next)
	{
		if(p->value == n )
		{
			return p;
		}
	}
	return NULL;
}

struct node *search_list(struct node *list, int n)
{
	for(; list != NULL; list = list->next)
	{
		if(list->value == n)
		{
			return list;
		}
	}
	return NULL;
}

struct node *search_list(struct node *list, int n)
{
	for(; list != NULL && list->value != n; list = list->next)
		;
	return list;
}

struct node* search_list(struct node * list, int n)
{
	while(list != NULL && list->value != n)
	{
		list = list->next;
	}
	return list;
}