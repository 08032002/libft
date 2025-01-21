/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumattei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:14:18 by lumattei          #+#    #+#             */
/*   Updated: 2025/01/20 23:40:56 by lumattei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack_node	*a;
//	t_stack_node	*b;

	a = NULL;
//	b = NULL;
	if (1 == argc || (!argv[1][0]))
		return (1);
	stack_init(&a, argv + 1);
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			tiny_sort(&a);
//		else
//			push_swap(&a, &b);
	}
	free_stack(&a);
}