#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int     main()
{

	printf("les chats %h sont mignons \n");
	ft_printf("%x\n", 010);

	/*
	//cas du print(0)
	printf("%d\n", printf(0));
	printf("%d\n", ft_printf(0));
	*/

	//SIMPLE TEXT
	printf("\nTEST SIMPLE CASE\n");

	int a = printf("printf\n");
	int b = ft_printf("printf\n");

	printf("printf count ;%d\nft_printf count;%d\n", a, b);

	printf("\r\n\t\v\n");
	ft_printf("\r\n\t\v\n");

	//TEST DES CHAR
	printf("\nTEST DES CHAR\n");

	char letter = 'a';
	int c = printf("%c\n", letter);
	int d = printf("%c\n", letter);

	printf("printf count ;%d\nft_printf count ;%d\n", c, d);

	char letter2 = 'b';
	char letter3 = 'c';
	char letter4 = 'd';
	int e = printf("%c %c %c\n", letter2, letter3, letter4);
	int f = ft_printf("%c %c %c\n", letter2, letter3, letter4);
	printf("printf count ;%d\nft_printf count ;%d\n", e, f);

	//TEST DES STR
	printf("\nTEST DES STR\n");
	char *str = "chats chiens serpents dragons";
	int g = printf("%s\n", str);
	int h = ft_printf("%s\n", str);
	printf("printf count ;%d\nft_printf count ;%d\n", g, h);

	char *str2 = NULL;
	int i = printf("%s\n", str2);
	int j = ft_printf("%s\n", str2);
	printf("printf count ;%d\nft_printf count ;%d\n", i, j);

	//TEST DES %d
	printf("\nTEST %%D\n");

	int num1 = 0;
	int num2 = 123;
	int num3 = -123;
	int k = printf("%d %d %d\n", num1, num2, num3);
	int l = ft_printf("%d %d %d\n", num1, num2, num3);
	printf("printf count ;%d\nft_printf count ;%d\n", k, l);

	printf("%d\n", INT_MAX);
	ft_printf("%d\n", INT_MAX);
	printf("%d\n", INT_MIN);
	ft_printf("%d\n", INT_MIN);

	/*
	printf("%d\n", INT_MAX + 3);
	ft_printf("%d\n", INT_MAX + 3);
	printf("%d\n", INT_MIN - 5);
	ft_printf("%d\n", INT_MIN - 5);
	*/


	//TEST DES %i
	printf("\nTEST %%I\n");

	int m = printf("%i %i %i\n", num1, num2, num3);
	int n = ft_printf("%i %i %i\n", num1, num2, num3);
	printf("printf count ;%i\nft_printf count ;%i\n", m, n);

	printf("%i\n", INT_MAX);
	ft_printf("%i\n", INT_MAX);
	printf("%i\n", INT_MIN);
	ft_printf("%i\n", INT_MIN);

	/*
	printf("%d\n", INT_MAX + 3);
	ft_printf("%d\n", INT_MAX + 3);
	printf("%d\n", INT_MIN - 5);
	ft_printf("%d\n", INT_MIN - 5);
	*/

	//TEST DES %u
	printf("\nTEST %%u\n");

	unsigned int num4 = 0;
	unsigned int num5 = 123;
	unsigned int num6 = -123;
	int o = printf("%d %d %d\n", num1, num2, num3);
	int p = ft_printf("%d %d %d\n", num1, num2, num3);
	printf("printf count ;%d\nft_printf count ;%d\n", o, p);

	printf("%d\n", UINT_MAX);
	ft_printf("%d\n", UINT_MAX);

	/*
	printf("%d\n", UINT_MAX + 3);
	ft_printf("%d\n", UINT_MAX + 3);
	*/

	//TEST DES %% et invalid format
	printf("\nTEST de %%%% et des invalid format\n");
	printf("%%\n");
	ft_printf("%%\n");
	/*
	printf("%q %t\n");
	ft_printf("%q %t\n");
	*/

	//TEST DES %p 
	printf("\nTEST DES %%p\n");
	int ptr1 = 42;
	char *W;
	float *flotty;
	void *vide = NULL;
	printf("%p\n", &ptr1);
	ft_printf("%p\n", &ptr1);
	printf("%p\n", W);
	ft_printf("%p\n", W);
	printf("%p\n", flotty);
	ft_printf("%p\n", flotty);

	//TEST des %x et %X
	printf("\nTEST DES %%x %%X\n");
	printf("%x\n", 0x1545);
	ft_printf("%x\n", 0x1545);
	printf("%x\n", 45678);
	ft_printf("%x\n", 45678);
	printf("%x\n", -42);	
	ft_printf("%x\n", -42);
	printf("%X\n", 0x1545);
	ft_printf("%X\n", 0x1545);
	printf("%X\n", 45678);
	ft_printf("%X\n", 45678);
	printf("%X\n", -42);	
	ft_printf("%X\n", -42);
	


	//TEST DES MIX DE DONNES
	printf("TEST DES MIX DE DONNE\n");
	printf("%d %u %c %s %x\n", 345, 34685, 'b', "les chats", 435346345);
	ft_printf("%d %u %c %s %x\n", 345, 34685, 'b', "les chats", 435346345);
	printf("%p %p %p\n", 0, &num1, 42);
	ft_printf("%p %p %p\n", 0, &num1, 42);
	printf("%s %p %u %p %% %t %c\n", "chats", &num1, 9, 0, 'a');
	ft_printf("%s %p %u %p %% %t %c\n", "chats", &num1, 9, 0, 'a');

	/* bonus part que j'ai pas fait mais pour test en correction
	printf("\nBONUS CORRECTION\n");
	printf("%10d\n",77777);
	ft_printf("%10d\n",77777);
	printf("%20s\n","les chats");
	ft_printf("%20s\n","les chats");
	printf("%-20d\n",77777);
	ft_printf("%-20d\n",77777);
	printf("%05d\n", 42);
	ft_printf("%05d\n", 42);
	printf("%.5s\n", "les chats");
	ft_printf("%.5s\n", "les chats");
	printf("%#x\n", 25590);
	ft_printf("%#x\n", 25590);
	printf("%#X\n", 25590);
	ft_printf("%#X\n", 25590);
	printf("%+d\n", 42);
	ft_printf("%+d\n", 42);
	printf("%+d\n", -42);
	ft_printf("%+d\n", -42);
	printf("% d\n", 42);
	ft_printf("% d\n", 42);
	printf("% d\n", -42);
	ft_printf("% d\n", -42);
	*/
}
