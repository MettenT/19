/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:38:27 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/16 10:38:28 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
	{
		return (NULL);
	}		
	j = 0;
	while (j < i)
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

// #include <stdio.h>
// int    main()
// {
//     char *str = "Hello!";
//     char *str2 = ft_strdup(str);
//     printf("Duplicate string: %s", str2);
// }

// DESCRIPTION
// 	The strdup() function returns a pointer to a new string which is
// 	a duplicate of the string s.  Memory for the new string is obtained
// 	with malloc(3), and can be freed with free(3). The strndup() 
// 	function is similar, but copies at most n bytes.  If s is longer
// 	than n, only n bytes are copied, and a terminating null byte ('\0')
// 	is added. strdupa()  and  strndupa()  are  similar, but use alloca(3)
// 	to allocate the buffer.  They are available only when using the GNU
// 	GCC suite, and suffer from the same limitations de‐scribed in alloca(3).

// RETURN VALUE
// 	On success, the strdup() function returns a pointer to the duplicated
// 	string. It returns NULL if insufficient memory was available, with
// 	errno set to indicate the  cause  of  the error.

// ex04

// void ft_putchar(char a)
// {
//   write(1, &a, 1);
// }

// int ft_count(char **argv)
// {
//   int i = 0;
  
//   while (argv[0][i] != '\0')
//   {
//     i++;
//   }
//   return (i);
// }

// void ft_print(int argc, char **argv, int size, int start)
// {
//   if (argc > 0)
//   {
//     while (size > 0)
//     {
//       ft_putchar(argv[0][start]);
//       start++;
//       size--;
//     }
//     ft_putchar('\n');
//     return (0);
//   }
// }

// int last_word_main(int argc, char **argv)
// {
//   int i = ft_count(argv) - 1;
//   int j = 0;
//   int count = 0;
  
//   if (argc == 1 && i >= 0)
//   {
//     while (argv[0][i] == ' ' || argv[0][i] == '\t' || argv[0][i] == '\n' || argv[0][i] == '\v' || argv[0][i] == '\f' || argv[0][i] == '\r')
//     {
//       i--;
//     }
//     while (i >= 0)
//     {
//       if (argv[0][i] == 'd' && argv[0][i - 1] == 'r' && argv[0][i - 2] == 'o' && argv[0][i - 3] == 'w' && i >= 3)
//       {
//         break;
//       }
//       else if (argv[0][i] == ' ' || argv[0][i] == '\t' || argv[0][i] == '\n' || argv[0][i] == '\v' || argv[0][i] == '\f' || argv[0][i] == '\r')
//       {
//         break;
//       }
//       else
//       {
//         j = i;
//         i--;
//         count++;
//       }
//     }
//     ft_print(argc, argv, count, j);
//     return (0);
//   }
//   else
//   {
//     ft_putchar('\n');
//     return(0);
//   }
// }
