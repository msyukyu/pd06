/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:09:41 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/20 18:13:54 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int cmp;

	i = 0;
	cmp = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && cmp == 0)
	{
		cmp = s1[i] - s2[i];
		i++;
	}
	return ((cmp == 0) ? s1[i] - s2[i] : cmp);
}

void	ft_sort_array_strings(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*str;

	j = argc;
	while (j > 0)
	{
		i = 0;
		while (i < j - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				str = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = str;
			}
			i++;
		}
		j--;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc > 1)
	{
		ft_sort_array_strings(argc, argv);
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			i++;
			ft_putchar('\n');
		}
	}
}
