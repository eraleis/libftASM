/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vatourni <vatourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 22:54:01 by vatourni          #+#    #+#             */
/*   Updated: 2015/03/19 22:54:03 by vatourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <limits.h>
#include <unistd.h>

int			main(void)
{
	int		i;
	size_t	c;


printf("\n\033[22;42m *** PART_1 *** \033[22;0m\n\n");

   printf("\033[22;45m FT_ISPRINT       \033[22;0m\n");
   c = 0;
   for ((i = -1000000); i < 1000000; i++)
   {
       if (ft_isprint(i) != isprint(i))
       {
           printf("ft_isprint error at i=%d [%d/%d]\n", i, ft_isprint(i), isprint(i));
           c++;
       }
   }
   if (!c)
   {
		printf("\033[22;45m \033[22;0mft_isprint: \033[22;32mOK !\033[22;0m\033[22;45m \033[22;0m");
       	printf("\n\033[22;45m                  \033[22;0m\n\n");
   }

	 printf("\033[22;45m FT_ISALPHA       \033[22;0m\n");
	 c = 0;
	 for ((i = -1000000); i < 1000000; i++)
	 {
	     if (ft_isalpha(i) != isalpha(i))
	     {
	         printf("ft_isalpha error at i=%d [%d/%d]\n", i, ft_isalpha(i), isalpha(i));
	         c++;
	     }
	 }
	if (!c)
	{
		printf("\033[22;45m \033[22;0mft_isalpha: \033[22;32mOK !\033[22;0m\033[22;45m \033[22;0m");
		printf("\n\033[22;45m                  \033[22;0m\n\n");
	}

  printf("\033[22;45m FT_ISDIGIT       \033[22;0m\n");
    c = 0;
    for ((i = -1000000); i < 1000000; i++)
    {
        if (ft_isdigit(i) != isdigit(i))
        {
            printf("ft_isdigit error at i=%d [%d/%d]\n", i, ft_isdigit(i), isdigit(i));
            c++;
        }
    }
    if (!c)
    {
        printf("\033[22;45m \033[22;0mft_isdigit: \033[22;32mOK !\033[22;0m\033[22;45m \033[22;0m");
        printf("\n\033[22;45m                  \033[22;0m\n\n");
    }

   printf("\033[22;45m FT_ISASCII       \033[22;0m\n");
   c = 0;
   for ((i = -1000000); i < 1000000; i++)
   {
       if (ft_isascii(i) != isascii(i))
       {
           printf("ft_isascii error at i=%d [%d/%d]\n", i, ft_isascii(i), isascii(i));
           c++;
       }
   }
   if (!c)
   {
		printf("\033[22;45m \033[22;0mft_isascii: \033[22;32mOK !\033[22;0m\033[22;45m \033[22;0m");
		printf("\n\033[22;45m                  \033[22;0m\n\n");
   }

   printf("\033[22;45m FT_ISALNUM       \033[22;0m\n");
   c = 0;
   for ((i = -1000000); i < 1000000; i++)
   {
       if (ft_isalnum(i) != isalnum(i))
       {
           printf("\033[22;45m \033[22;0mft_isalnum error at i=%d [%d/%d]\033[22;45m \033[22;0m", i, ft_isalnum(i), isalnum(i));
           c++;
       }
   }
   if (!c)
   {
       printf("\033[22;45m \033[22;0mft_isalnum: \033[22;32mOK !\033[22;0m\033[22;45m \033[22;0m");
       	printf("\n\033[22;45m                  \033[22;0m\n\n");
   }


   printf("\033[22;45m FT_TOUPPER       \033[22;0m\n");
   c = 0;
   for ((i = -1000000); i < 1000000; i++)
   {
       if (ft_toupper(i) != toupper(i))
       {
           printf("ft_toupper error at i=%d [%d/%d]\n", i, ft_toupper(i), toupper(i));
           c++;
       }
   }
   if (!c)
   {
       printf("\033[22;45m \033[22;0mft_toupper: \033[22;32mOK !\033[22;0m\033[22;45m \033[22;0m");
       	printf("\n\033[22;45m                  \033[22;0m\n\n");
   }

   printf("\033[22;45m FT_TOLOWER       \033[22;0m\n");
   c = 0;
   for ((i = -1000000); i < 1000000; i++)
   {
       if (ft_tolower(i) != tolower(i))
       {
           printf("ft_tolower error at i=%d [%d/%d]\n", i, ft_tolower(i), tolower(i));
           c++;
       }
   }
   if (!c)
   {
       printf("\033[22;45m \033[22;0mft_tolower: \033[22;32mOK !\033[22;0m\033[22;45m \033[22;0m");
       	printf("\n\033[22;45m                  \033[22;0m\n\n");
   }

    int     ret[2];
   printf("\033[22;45m FT_PUTS          \033[22;0m\n");
   c = 0;
   if ((ret[0] = ft_puts("ft_puts: Hello")) != (ret[1] = puts("puts: Hello")))
   {
       printf("ft_puts error [%d/%d]\n", ret[0], ret[1]);
       c++;
   }
   if ((ret[0] = ft_puts("")) != (ret[1] = puts("")))
   {
       printf("ft_puts error [%d/%d]\n", ret[0], ret[1]);
       c++;
   }
   if (!c)
   {
       printf("\033[22;45m \033[22;0mft_puts: \033[22;32mOK !\033[22;0m\033[22;45m    \033[22;0m");
       printf("\n\033[22;45m                  \033[22;0m\n\n");
   }

     char    str[20] = "Hello";
   printf("\033[22;45m FT_STRCAT \033[22;0m\n");
   printf("%p\n", str);
   printf("\"Hello\" + \" world !\": %s\n", ft_strcat(str, " world !"));
   printf("\"Hello world !\" + \"\": %s\n", ft_strcat(str, ""));
   printf("%p\n\n", str);

	char	str2[14] = "Hello world !";

	printf("\033[22;45m FT_BZERO \033[22;0m\n");
	printf("%p\n", str2);
	printf("[%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c]\n",
			str2[0], str2[1], str2[2], str2[3], str2[4], str2[5], str2[6],
			str2[7], str2[8], str2[9], str2[10], str2[11], str2[12], str2[13]);
	ft_bzero(str2, 0);
	printf("[%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c]\n",
			str2[0], str2[1], str2[2], str2[3], str2[4], str2[5], str2[6],
			str2[7], str2[8], str2[9], str2[10], str2[11], str2[12], str2[13]);
	ft_bzero(str2, 6);
	printf("[%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c]\n",
			str2[0], str2[1], str2[2], str2[3], str2[4], str2[5], str2[6],
			str2[7], str2[8], str2[9], str2[10], str2[11], str2[12], str2[13]);
	ft_bzero(str2, 13);
	printf("[%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c]\n",
			str2[0], str2[1], str2[2], str2[3], str2[4], str2[5], str2[6],
			str2[7], str2[8], str2[9], str2[10], str2[11], str2[12], str2[13]);
	printf("%p\n\n", str2);

printf("\n\033[22;42m *** PART_2 *** \033[22;0m\n\n");

   printf("\033[22;45m FT_STRLEN \033[22;0m\n");
   c = 0;
   if (ft_strlen(str) != strlen(str))
   {
       printf("ft_strlen error [%ld/%ld]\n", ft_strlen(str), strlen(str));
       c++;
   }
   if (ft_strlen(str2) != strlen(str2))
   {
       printf("ft_strlen error [%ld/%ld]\n", ft_strlen(str2), strlen(str2));
       c++;
   }
   if (ft_strlen("1") != strlen("1"))
   {
       printf("ft_strlen error [%ld/%ld]\n", ft_strlen("1"), strlen("1"));
       c++;
   }
   if (ft_strlen("\0") != strlen("\0"))
   {
       printf("ft_strlen error [%ld/%ld]\n", ft_strlen("\0"), strlen("\0"));
       c++;
   }
   if (!c)
       printf("ft_strlen: \033[22;32mOK !\033[22;0m\n\n");

   char    str3[14] = "Hello world !";

   printf("\033[22;45m FT_MEMSET \033[22;0m\n");
   printf("%p\n", str3);
   printf("[%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c]\n",
           str3[0], str3[1], str3[2], str3[3], str3[4], str3[5], str3[6],
           str3[7], str3[8], str3[9], str3[10], str3[11], str3[12], str3[13]);
   ft_memset(str3, 'X', 0);
   printf("[%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c]\n",
           str3[0], str3[1], str3[2], str3[3], str3[4], str3[5], str3[6],
           str3[7], str3[8], str3[9], str3[10], str3[11], str3[12], str3[13]);
   ft_memset(str3, 'X', 6);
   printf("[%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c]\n",
           str3[0], str3[1], str3[2], str3[3], str3[4], str3[5], str3[6],
           str3[7], str3[8], str3[9], str3[10], str3[11], str3[12], str3[13]);
   ft_memset(str3, 'X', 14);
   printf("[%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c]\n",
           str3[0], str3[1], str3[2], str3[3], str3[4], str3[5], str3[6],
           str3[7], str3[8], str3[9], str3[10], str3[11], str3[12], str3[13]);
   printf("%p\n\n", str3);

   char    str4[14] = "Hello world !";

   printf("\033[22;45m FT_MEMCPY \033[22;0m\n");
   printf("%p\n", str4);
   printf("[%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c]\n",
           str4[0], str4[1], str4[2], str4[3], str4[4], str4[5], str4[6],
           str4[7], str4[8], str4[9], str4[10], str4[11], str4[12], str4[13]);
   ft_memcpy(str4, "Bonjour monde", 0);
   printf("[%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c]\n",
           str4[0], str4[1], str4[2], str4[3], str4[4], str4[5], str4[6],
           str4[7], str4[8], str4[9], str4[10], str4[11], str4[12], str4[13]);
   ft_memcpy(str4, "Bonjour monde", 5);
   printf("[%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c]\n",
           str4[0], str4[1], str4[2], str4[3], str4[4], str4[5], str4[6],
           str4[7], str4[8], str4[9], str4[10], str4[11], str4[12], str4[13]);
   ft_memcpy(str4, "Bonjour monde", 13);
   printf("[%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c]\n",
           str4[0], str4[1], str4[2], str4[3], str4[4], str4[5], str4[6],
           str4[7], str4[8], str4[9], str4[10], str4[11], str4[12], str4[13]);
   printf("%p\n\n", str4);

    char    str5[14] = "Hello world !";
    char    *str6;

	printf("\033[22;45m FT_STRDUP \033[22;0m\n");
	str6 = ft_strdup(str5);
	printf("%p\n", str5);
	printf("%s\n", str5);
	printf("----------\n");
	printf("%p\n", str6);
	printf("%s\n", str6);

printf("\n\033[22;42m *** BONUS *** \033[22;0m\n\n");

  printf("\033[22;45m FT_POWER \033[22;0m\n");
  printf("%d^%d = %d\n", 5, 3, ft_power(5, 3));
  printf("%d^%d = %d\n", 4, 2, ft_power(4, 2));
  printf("%d^%d = %d\n", 15, 7, ft_power(15, 7));


  printf("\033[22;45m FT_ISBLANK \033[22;0m\n");
  printf("is '%c' blank ? -> %d\n", ' ', ft_isblank(' '));
  printf("is '%c' blank ? -> %d\n", '	', ft_isblank('	'));
  printf("is '%c' blank ? -> %d\n", 'w', ft_isblank('w'));

  printf("\033[22;45m FT_STRCLR \033[22;0m\n");
  printf("before: [%s]\n", str6);
  ft_strclr(str6);
  printf("after:  [%s]\n", str6);

  printf("\033[22;45m FT_PUTSTR \033[22;0m\n");
  ft_putstr("ft_putstr: Hello World!\n");

  printf("\033[22;45m FT_PUTSTR_FD \033[22;0m\n");
  ft_putstr_fd("ft_putstr: Hello World!\n", 2);

	return (0);
}
