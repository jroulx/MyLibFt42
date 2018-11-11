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
*/
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
	return (0);
}
