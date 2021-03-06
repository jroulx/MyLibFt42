/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:17:03 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/09 14:33:50 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* C/C add :
/ ||(ft_strcmp(argv[1], "fulltest") == 0)
/ if (!(ft_strcmp(argv[1], "fulltest") == 0))
/ test memdel ? test strdel ?
*/
static void		ft_toupperr(char *c)
		{
			if (*c >= 'a' && *c <= 'z')
				*c -= 32;
		} /* for some test like ft_striter*/

static void		ft_toupperri(unsigned int index, char *c)
		{
			if (index < ft_strlen(c - index))
			{
				if (*c >= 'a' && *c <= 'z')
					*c -= 32;
			}
		} /* for some test like ft_striteri*/

static char		ft_strmap_test(char c)
		{
			if (c >= 'a' && c <= 'z')
				return (c - 32);
			return (c);
		} /* for some test like ft_strmap*/

static char		ft_strmapi_test(unsigned int k, char c)
		{
			(void)k;
			if (c >= 'a' && c <= 'z')
				return (c - 32);
			return (c);
		} /* for some test like ft_strmapi*/			

int		main (int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("Veuillez choisir une fonction !");
		ft_putchar('\n');
		return (0);
	}
	if ((ft_strcmp(argv[1], "ft_bzero") == 0) || (ft_strcmp(argv[1], "fulltest") == 0)) 
	{
		/* On observe les contenues de test1 et test2 avant, 
		/ et après le passage de bzero -> Modifier la valeur pour
		/que les test soit visible*/
		char test1[100] = "Hello World";
		char test2[100] = "WargrooveIncoming";

		ft_putstr("Test de ft_bzero\n*****************\n");
		ft_putstr(test1);
		ft_putchar('\n');
		ft_putstr(test2);
		ft_putchar('\n');
		ft_bzero(test1, 5);
		ft_bzero(test2, ft_strlen(test2));
		ft_putstr(test1);
		ft_putchar('\n');
		ft_putstr(test2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);	
	}

	if ((ft_strcmp(argv[1], "ft_memset") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		/* On observe les contenues de test1 et test2 avant, 
		/ et après le passage de memset, avec le charactère
		/choisit -> charac */
		char test1[100] = "Hello World";
		char test2[100] = "Hello World";

		ft_putstr("Test de ft_memset\n*****************\n");
		ft_putstr(test1);
		ft_putchar('\n');
		ft_memset(test1, 'h', 6);
		memset(test2, 'h', 6);
		ft_putstr(test1);
		ft_putchar('\n');
		ft_putstr(test2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_memcpy") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
	/* On défini 2 CdC src1, 2 qu'on copie dans 2 autres CdC
	/ dest1, 2. On affiche les dest avant et après l'opération.*/
		char src1[100] = "Hello World";
		char src2[100] = "Hello World";
		char dest1[100] = "WargrooveIncoming";
		char dest2[100] = "WargrooveIncoming";

		ft_putstr("Test de ft_memcpy\n*****************\n");
		ft_putstr(src1);
		ft_putchar('\n');
		ft_putstr(dest1);
		ft_putchar('\n');
		ft_memcpy(dest1, src1, 6);
		memcpy(dest2, src2, 6);
		ft_putstr(dest1);
		ft_putchar('\n');
		ft_putstr(dest2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_memccpy") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
	/* On défini 3 CdC src1, 2, 3 qu'on copie dans 3 autres CdC
	dest1, 2, 3. On affiche les dest avant et après l'opération.
	Test à modifier -> Tester NULL ET Arrêt via Seek*/
		char src1[100] = "Hello World";
		char src2[100] = "Hello World";
		char dest1[100] = "WargrooveIncoming";
		char dest2[100] = "WargrooveIncoming";

		ft_putstr("Test de ft_memccpy\n*****************\n");
		ft_putstr(src1);
		ft_putchar('\n');
		ft_putstr(dest1);
		ft_putchar('\n');
		ft_putstr(ft_memccpy(dest1, src1, 'l', 6));
		ft_putchar('\n');
		ft_putstr(memccpy(dest2, src2, 'l', 6));
		ft_putchar('\n');
		ft_putstr(dest1);
		ft_putchar('\n');
		ft_putstr(dest2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_memmove") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
	/* On défini 2 CdC src1, 2 qu'on copie dans 2 autres CdC
	/ dest1, 2. On affiche les dest avant et après l'opération.*/
		char src1[100] = "Hello World";
		char src2[100] = "Hello World";
		char dest1[100] = "WargrooveIncoming";
		char dest2[100] = "WargrooveIncoming";

		ft_putstr("Test de ft_memmove\n*****************\n");
		ft_putstr(src1);
		ft_putchar('\n');
		ft_putstr(dest1);
		ft_putchar('\n');
		ft_memmove(dest1, src1, ft_strlen(src2));
		memmove(dest2, src2, ft_strlen(src2));
		ft_putstr(dest1);
		ft_putchar('\n');
		ft_putstr(dest2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}
	/* On teste si la fonction trouve notre charactère
	/et affiche correctement la str de sortie */
	if ((ft_strcmp(argv[1], "ft_memchr") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char src1[100] = "Hello World!";

		ft_putstr("Test de ft_memchr\n*****************\n");
		ft_putstr(src1);
		ft_putchar('\n');
		if (ft_memchr(src1, 'o', 7) != NULL)
			ft_putstr(ft_memchr(src1, 'o', 7));
		ft_putchar('\n');
		if (ft_memchr(src1, 'o', 7) != NULL)
			ft_putstr(memchr(src1, 'o', 7));
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_putstr") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char *test1;
		char *test2;

		ft_putstr("Test de ft_putstr\n*****************\n");
		test1 = "hello world!";
		test2 = "wargroove";
		ft_putstr(test1);
		ft_putchar('\n');
		ft_putstr(test2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strcmp") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char *test1;
		char *test2;
		char *test3;

		ft_putstr("Test de ft_strcmp\n*****************\n");
		test1 = "hello world!";
		test2 = "wargroove";
		test3 = "hello world!";
		if (ft_strcmp(test1, test2) < 0)
			ft_putstr("TEST1 -> OK\n");
		else ft_putstr("TEST1 -> KO\n");
		if (ft_strcmp(test2, test1) > 0)
			ft_putstr("TEST2 -> OK\n");
		else ft_putstr("TEST2 -> KO\n");
		if (ft_strcmp(test1, test3) == 0)
			ft_putstr("TEST3 -> OK\n");
		else ft_putstr("TEST3 -> KO\n");
		ft_putstr("Congrats !\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strlen") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char *test1;
		char *test2;

		ft_putstr("Test de ft_strlen\n*****************\n");
		test1 = "Hello!";
		test2 = "Wargroove incoming";
		if (ft_strlen(test1) == 6)
			ft_putstr("TEST1 -> OK\n");
		else (ft_putstr("TEST1 -> KO\n"));
		if (ft_strlen(test2) == 18)
			ft_putstr("TEST2 -> OK\n\n");
		else (ft_putstr("TEST2 -> KO\n\n"));
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_memcmp") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char *test1;
		char *test2;
		char *test3;

		ft_putstr("Test de ft_memcmp\n*****************\n");
		test1 = "hello world!";
		test2 = "wargroove";
		test3 = "hella world!";
		if (ft_memcmp(test1, test2, 4) < 0)
			ft_putstr("TEST1 -> OK\n");
		else ft_putstr("TEST1 -> KO\n");
		if (ft_memcmp(test2, test1, 5) > 0)
			ft_putstr("TEST2 -> OK\n");
		else ft_putstr("TEST2 -> KO\n");
		if (ft_memcmp(test1, test3, 3) == 0)
			ft_putstr("TEST3 -> OK\n");
		else ft_putstr("TEST3 -> KO\n");
		ft_putstr("Congrats !\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strdup") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
		char src1[100] = "Hello World";
		char src2[100] = "Hello World";
		char *dest1;
		char *dest2;

		ft_putstr("Test de ft_strdup\n*****************\n");
		ft_putstr(src1);
		ft_putchar('\n');
		dest1 = ft_strdup(src1);
		dest2 = strdup(src2);
		ft_putstr(dest1);
		ft_putchar('\n');
		ft_putstr(dest2);
		ft_putstr("\n\n");
		free(dest1);
		free(dest2);
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strcpy") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
		char src1[100] = "Hello World";
		char src2[100] = "Hello World";
		char dest1[100];
		char dest2[100];


		ft_putstr("Test de ft_strcpy\n*****************\n");
		ft_putstr(src1);
		ft_putchar('\n');
		ft_strcpy(dest1, src1);
		ft_putstr(dest1);
		ft_putchar('\n');
		strcpy(dest2, src2);
		ft_putstr(dest2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strncpy") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
		char src1[100] = "Hello World";
		char src2[100] = "Hello World";
		char dest1[100];
		char dest2[100];


		ft_putstr("Test de ft_strncpy\n*****************\n");
		ft_putstr(src1);
		ft_putchar('\n');
		ft_strncpy(dest1, src1, 5);
		ft_putstr(dest1);
		ft_putchar('\n');
		strncpy(dest2, src2, 5);
		ft_putstr(dest2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strcat") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
		char src1[100] = "Hello World";
		char src2[100] = "Hello World";
		char dest1[100] = "Wargroove";
		char dest2[100] = "Wargroove";


		ft_putstr("Test de ft_strcat\n*****************\n");
		ft_putstr(src1);
		ft_putchar('\n');
		ft_putstr(dest1);
		ft_putchar('\n');
		ft_strcat(dest1, src1);
		ft_putstr(dest1);
		ft_putchar('\n');
		strcat(dest2, src2);
		ft_putstr(dest2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strncat") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
		char src1[100] = "Hello World";
		char src2[100] = "Hello World";
		char dest1[100] = "Wargroove";
		char dest2[100] = "Wargroove";


		ft_putstr("Test de ft_strncat\n*****************\n");
		ft_putstr(src1);
		ft_putchar('\n');
		ft_putstr(dest1);
		ft_putchar('\n');
		ft_strncat(dest1, src1, 5);
		ft_putstr(dest1);
		ft_putchar('\n');
		strncat(dest2, src2, 5);
		ft_putstr(dest2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strlcat") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
		char src1[100] = "Hello World";
		char src2[15] = "Gitgudnoob";
		char dest1[100] = "Wargroove";
		char dest2[100] = "Coucou";


		ft_putstr("Test de ft_strlcat\n*****************\n");
		ft_putstr(src1);
		ft_putchar('\n');
		ft_putstr(src2);
		ft_putchar('\n');
		ft_putstr(dest1);
		ft_putchar('\n');
		ft_putstr(dest2);
		ft_putchar('\n');
		ft_strlcat(dest1, src1, 100);
		ft_putstr(dest1);
		ft_putchar('\n');
		ft_strlcat(dest2, src2, 100);
		ft_putstr(dest2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strchr") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
		char src1[100] = "Hello World";
		char *dest1;
		char *dest2;

		ft_putstr("Test de ft_strchr\n*****************\n");
		ft_putstr(src1);
		ft_putchar('\n');
		dest1 = ft_strchr(src1, 'o');
		dest2 = strchr(src1, 'o');
		ft_putstr(dest1);
		ft_putchar('\n');
		ft_putstr(dest2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strrchr") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
		char src1[100] = "Hello World";
		char *dest1;
		char *dest2;

		ft_putstr("Test de ft_strrchr\n*****************\n");
		ft_putstr(src1);
		ft_putchar('\n');
		dest1 = ft_strrchr(src1, 'o');
		ft_putstr(dest1);
		ft_putchar('\n');
		dest2 = strrchr(src1, 'o');
		ft_putstr(dest2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strstr") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
		char src1[100] = "Wargrooveincomingsoon";
		char src2[100] = "incoming";
		char *dest1;
		char *dest2;

		ft_putstr("Test de ft_strstr\n*****************\n");
		ft_putstr(src1);
		ft_putchar('\n');
		ft_putstr(src2);
		ft_putchar('\n');
		dest1 = ft_strstr(src1, src2);
		dest2 = strstr(src1, src2);
		ft_putstr(dest1);
		ft_putchar('\n');
		ft_putstr(dest2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strnstr") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
		char src1[100] = "Wargrooveincomingsoon";
		char src2[100] = "incoming";
		char *dest1;
		char *dest2;

		ft_putstr("Test de ft_strnstr\n*****************\n");
		ft_putstr(src1);
		ft_putchar('\n');
		ft_putstr(src2);
		ft_putchar('\n');
		dest1 = ft_strnstr(src1, src2, 15);
		dest2 = ft_strnstr(src1, src2, 13);
		ft_putstr(dest1);
		ft_putchar('\n');
		ft_putstr(dest2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strncmp") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char *test1;
		char *test2;
		char *test3;

		ft_putstr("Test de ft_strncmp\n*****************\n");
		test1 = "hello world!";
		test2 = "wargroove";
		test3 = "hello warld!";
		if (ft_strncmp(test1, test2, 7) < 0)
			ft_putstr("TEST1 -> OK\n");
		else ft_putstr("TEST1 -> KO\n");
		if (ft_strncmp(test2, test1, 6) > 0)
			ft_putstr("TEST2 -> OK\n");
		else ft_putstr("TEST2 -> KO\n");
		if (ft_strncmp(test1, test3, 5) == 0)
			ft_putstr("TEST3 -> OK\n");
		else ft_putstr("TEST3 -> KO\n");
		ft_putstr("Congrats !\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_atoi") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char *test1;
		char *test2;
		char *test3;

		test1 = "-15k7";
		test2 = "+1875";
		test3 = "-546k5-";
		ft_putstr("Test de ft_atoi\n*****************\n");
		ft_putstr(test1);
		ft_putchar('\n');
		ft_putstr(test2);
		ft_putchar('\n');
		ft_putstr(test3);
		ft_putchar('\n');
		ft_putnbr_fd(atoi(test1), 1);
		ft_putchar('\n');
		ft_putnbr_fd(atoi(test2), 1);
		ft_putchar('\n');
		ft_putnbr_fd(atoi(test3), 1);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_putnbr_fd") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		int	test1;
		int test2;

		test1 = 18;
		test2 = -256;
		ft_putstr("Test de ft_putnbr_fd\n*****************\n");
		ft_putnbr_fd(test1, 1);
		ft_putchar('\n');
		ft_putnbr_fd(test2, 1);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_putnbr") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		int	test1;
		int test2;

		test1 = 318;
		test2 = -7256;
		ft_putstr("Test de ft_putnbr\n*****************\n");
		ft_putnbr(test1);
		ft_putchar('\n');
		ft_putnbr(test2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_isalpha") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		int	test1;
		int test2;

		test1 = 'C';
		test2 = '3';
		ft_putstr("Test de ft_isalpha\n*****************\n");
		if (ft_isalpha(test1))
			ft_putstr("Test 1 -> OK\n");
		else ft_putstr("Test 1 -> KO\n");
		if (!(ft_isalpha(test2)))
			ft_putstr("Test 2 -> OK");
		else ft_putstr("Test 2 -> KO");
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_isdigit") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		int	test1;
		int test2;

		test1 = '7';
		test2 = 'k';
		ft_putstr("Test de ft_isdigit\n*****************\n");
		if (ft_isdigit(test1))
			ft_putstr("Test 1 -> OK\n");
		else ft_putstr("Test 1 -> KO\n");
		if (!(ft_isdigit(test2)))
			ft_putstr("Test 2 -> OK");
		else ft_putstr("Test 2 -> KO");
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_isalnum") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		int	test1;
		int test2;

		test1 = '7';
		test2 = 'k';
		ft_putstr("Test de ft_isalnum\n*****************\n");
		if (ft_isalnum(test1))
			ft_putstr("Test 1 -> OK\n");
		else ft_putstr("Test 1 -> KO\n");
		if (ft_isalnum(test2))
			ft_putstr("Test 2 -> OK");
		else ft_putstr("Test 2 -> KO");
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_isascii") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		int	test1;
		int test2;

		test1 = 7;
		test2 = 129;
		ft_putstr("Test de ft_isascii\n*****************\n");
		if (ft_isascii(test1))
			ft_putstr("Test 1 -> OK\n");
		else ft_putstr("Test 1 -> KO\n");
		if (!(ft_isascii(test2)))
			ft_putstr("Test 2 -> OK");
		else ft_putstr("Test 2 -> KO");
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_isprint") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		int	test1;
		int test2;

		test1 = 32;
		test2 = 127;
		ft_putstr("Test de ft_isprint\n*****************\n");
		if (ft_isprint(test1))
			ft_putstr("Test 1 -> OK\n");
		else ft_putstr("Test 1 -> KO\n");
		if (!(ft_isprint(test2)))
			ft_putstr("Test 2 -> OK");
		else ft_putstr("Test 2 -> KO");
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_toupper") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		int	test1;
		int test2;

		test1 = 'a';
		test2 = '2';
		ft_putstr("Test de ft_toupper\n*****************\n");
		ft_putstr("a --> ");
		ft_putchar(ft_toupper(test1));
		ft_putchar('\n');
		ft_putstr("2 --> ");
		ft_putchar(ft_toupper(test2));
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_tolower") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		int	test1;
		int test2;

		test1 = 'R';
		test2 = '2';
		ft_putstr("Test de ft_tolower\n*****************\n");
		ft_putstr("R --> ");
		ft_putchar(ft_tolower(test1));
		ft_putchar('\n');
		ft_putstr("2 --> ");
		ft_putchar(ft_tolower(test2));
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_memalloc") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char* test1;

		test1 = ft_memalloc(8);
		ft_putstr("Test de ft_memalloc\n*****************\n");
		if (test1[5] == '\0')
			ft_putstr("Test --> OK\n\n");
		else ft_putstr("Test --> KO\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strnew") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char* test;

		test = ft_strnew(7);
		ft_putstr("Test de ft_strnew\n*****************\n");
		if (test[5] == '\0')
			ft_putstr("Test --> OK\n\n");
		else ft_putstr("Test --> KO\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strclr") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char 	test[20] = "HelloWorld";

		ft_strclr(test);
		ft_putstr("Test de ft_strclr\n*****************\n");
		if (test[5] == '\0')
			ft_putstr("Test --> OK\n\n");
		else ft_putstr("Test --> KO\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}


	if ((ft_strcmp(argv[1], "ft_striter") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char 	test[20] = "HelloWorld";
		
		ft_putstr("Test de ft_striter\n*****************\n");
		ft_putstr(test);
		ft_putstr(" --> ");
		ft_striter(test, ft_toupperr);
		ft_putstr(test);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_striteri") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char 	test[20] = "HelloWorld";
		
		ft_putstr("Test de ft_striteri\n*****************\n");
		ft_putstr(test);
		ft_putstr(" --> ");
		ft_striteri(test, ft_toupperri);
		ft_putstr(test);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strmap") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char 	test[20] = "HelloWorld";
		char 	*test2;
		
		ft_putstr("Test de ft_strmap\n*****************\n");
		ft_putstr(test);
		ft_putstr(" --> ");
		test2 = ft_strmap(test, ft_strmap_test);
		ft_putstr(test2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strmapi") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char 	test[20] = "HelloWorld";
		char 	*test2;
		
		ft_putstr("Test de ft_strmapi\n*****************\n");
		ft_putstr(test);
		ft_putstr(" --> ");
		test2 = ft_strmapi(test, ft_strmapi_test);
		ft_putstr(test2);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strequ") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char *test1;
		char *test2;
		char *test3;

		ft_putstr("Test de ft_strequ\n*****************\n");
		test1 = "hello world!";
		test2 = "wargroove";
		test3 = "hello world!";
		if (ft_strequ(test1, test2) == 0)
			ft_putstr("TEST1 -> OK\n");
		else ft_putstr("TEST1 -> KO\n");
		if (ft_strequ(test2, test1) == 0)
			ft_putstr("TEST2 -> OK\n");
		else ft_putstr("TEST2 -> KO\n");
		if (ft_strequ(test1, test3) == 1)
			ft_putstr("TEST3 -> OK\n");
		else ft_putstr("TEST3 -> KO\n");
		ft_putstr("Congrats !\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strnequ") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char *test1;
		char *test2;
		char *test3;

		ft_putstr("Test de ft_strnequ\n*****************\n");
		test1 = "hello world!";
		test2 = "wargroove";
		test3 = "hello warld!";
		if (ft_strnequ(test1, test2, ft_strlen(test1)) == 0)
			ft_putstr("TEST1 -> OK\n");
		else ft_putstr("TEST1 -> KO\n");
		if (ft_strnequ(test2, test1, 3) == 0)
			ft_putstr("TEST2 -> OK\n");
		else ft_putstr("TEST2 -> KO\n");
		if (ft_strnequ(test1, test3, 5) == 1)
			ft_putstr("TEST3 -> OK\n");
		else ft_putstr("TEST3 -> KO\n");
		ft_putstr("Congrats !\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strsub") == 0)||(ft_strcmp(argv[1], "fulltest") == 0))
	{
		char 	test[30] = "wargrooveincoming";
		char 	*test2;
		
		ft_putstr("Test de ft_strsub\n*****************\n");
		ft_putstr(test);
		ft_putstr(" --> ");
		test2 = ft_strsub(test, 3, 8);
		ft_putstr(test2);
		ft_putstr("\nExpected : groovein");
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strjoin") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
		char src1[100] = "Hello World";
		char src2[100] = "Wargroove";
		char *dest;;

		ft_putstr("Test de ft_strjoin\n*****************\n");
		dest = ft_strjoin(src1, src2);
		ft_putstr(dest);
		ft_putstr("\nExpected --> Hello WorldWargroove");
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strtrim") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
		char src[100] = "  H elloWor ld ";
		char *dest;

		ft_putstr("Test de ft_strtrim\n*****************\n");
		ft_putstr(src);
		ft_putchar('\n');
		dest = ft_strtrim(src);
		ft_putstr(dest);
		ft_putstr("\nExpected -->H elloWor ld");
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_strsplit") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
		char src[100] = "Bonjour**";
		char **dest;
		int k;
		int y;

		ft_putstr("Test de ft_strsplit\n*****************\n");
		ft_putstr(src);
		ft_putchar('\n');
		dest = ft_strsplit(src, '*');
		y = 0;
		while (dest[y] != 0)
		{
			ft_putstr(dest[y]);
			ft_putchar('\n');
			y++;
		}
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_itoa") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
		char *dest;

		ft_putstr("Test de ft_itoa\n*****************\n");
		dest = ft_itoa(-187);
		ft_putstr(dest);
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	if ((ft_strcmp(argv[1], "ft_putendl") == 0) || (ft_strcmp(argv[1], "fulltest") == 0))
	{
		ft_putstr("Test de ft_putendl\n*****************\n");
		ft_putendl("hey bonjour");
		ft_putchar('b');
		ft_putstr("\n\n");
		if (!(ft_strcmp(argv[1], "fulltest") == 0))
			return (0);
	}

	return (0);
}
