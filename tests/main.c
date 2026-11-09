/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:38:47 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/06 12:46:47 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

#define TEST(...)                                                       \
	do                                                                  \
	{                                                                   \
		int a;                                                          \
		int b;                                                          \
		printf("\n========== TEST %d ==========\n", __LINE__);          \
		fflush(stdout);                                                 \
		printf("ft_printf : [");                                        \
		fflush(stdout);                                                 \
		a = ft_printf(__VA_ARGS__);                                     \
		printf("]\n");                                                  \
		printf("printf    : [");                                        \
		fflush(stdout);                                                 \
		b = printf(__VA_ARGS__);                                        \
		printf("]\n");                                                  \
		printf("Retour ft_printf = %d\n", a);                           \
		printf("Retour printf    = %d\n", b);                           \
		printf("Comparaison retours : %s\n", a == b ? "OK" : "ERREUR"); \
	} while (0)

int	main(void)
{
	int	n;
	int	*ptr;

	n = 42;
	ptr = &n;
	printf("\n===== TESTS CARACTERES =====\n");
	TEST("Bonjour 42");
	TEST("%c", 'A');
	TEST("%c", 'z');
	TEST("%c", '0');
	TEST("%c", '\0');
	TEST("A%cB", '\0');
	TEST("%c%c%c", 'A', 'B', 'C');
	printf("\n===== TESTS CHAINES =====\n");
	TEST("%s", "Bonjour");
	TEST("%s", "");
	TEST("%s", "42 Belgium");
	TEST("[%s]", "");
	TEST("%s %s", "Hello", "World");
	printf("\n===== TESTS ENTIERS SIGNES =====\n");
	TEST("%d", 0);
	TEST("%d", 1);
	TEST("%d", -1);
	TEST("%d", 42);
	TEST("%d", -42);
	TEST("%d", INT_MAX);
	TEST("%d", INT_MIN);
	TEST("%i", 0);
	TEST("%i", 123456);
	TEST("%i", -123456);
	TEST("%i", INT_MAX);
	TEST("%i", INT_MIN);
	printf("\n===== TESTS UNSIGNED =====\n");
	TEST("%u", 0U);
	TEST("%u", 1U);
	TEST("%u", 42U);
	TEST("%u", 1000U);
	TEST("%u", UINT_MAX);
	printf("\n===== TESTS HEXA MINUSCULE =====\n");
	TEST("%x", 0U);
	TEST("%x", 9U);
	TEST("%x", 10U);
	TEST("%x", 15U);
	TEST("%x", 16U);
	TEST("%x", 26U);
	TEST("%x", 255U);
	TEST("%x", 4095U);
	TEST("%x", UINT_MAX);
	printf("\n===== TESTS HEXA MAJUSCULE =====\n");
	TEST("%X", 0U);
	TEST("%X", 10U);
	TEST("%X", 15U);
	TEST("%X", 26U);
	TEST("%X", 255U);
	TEST("%X", UINT_MAX);
	printf("\n===== TESTS POINTEURS =====\n");
	TEST("%p", (void *)ptr);
	TEST("%p", (void *)NULL);
	TEST("%p", (void *)0x1);
	TEST("%p", (void *)0x1234);
	TEST("%p", (void *)0xabcdef);
	printf("\n===== TESTS POURCENTAGE =====\n");
	TEST("%%");
	TEST("100%%");
	TEST("%% %% %%");
	printf("\n===== TESTS MULTIPLES =====\n");
	TEST("%d %d %d", 1, -2, 3);
	TEST("%u %u %u", 0U, 42U, UINT_MAX);
	TEST("%x %X", 255U, 255U);
	TEST("%c %s", 'A', "Bonjour");
	TEST("%d %i %u", -42, 123, 42U);
	TEST("%p %d", (void *)ptr, 42);
	TEST("%s %x %X", "42", 255U, 255U);
	TEST("%c %s %p %d %i %u %x %X %%", 'Z', "Hello", (void *)ptr, -42, 123,
		456U, 255U, 255U);
	printf("\n===== FIN DES TESTS =====\n");
	return (0);
}
