/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastro <bcastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 18:04:16 by bcastro           #+#    #+#             */
/*   Updated: 2018/12/01 20:08:35 by bcastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

int		main(void)
{
	int		file_desc;
	char	*file_str;
	int		ret;

	file_desc = open("test.txt", O_RDONLY);
	while ((ret = get_next_line(file_desc, &file_str)) == 1)
	{
		printf("%s\n", file_str);
	}
	if (ret == -1)
		printf("ERROR: There was an error reading your file.\n");

	return (0);
}
