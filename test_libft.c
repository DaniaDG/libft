/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsausage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:17:48 by bsausage          #+#    #+#             */
/*   Updated: 2019/09/04 15:02:34 by bsausage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	test_strlen(void)
{
	const char a1[] = "Hello"; 
	const char a2[] = "";
	const char a3[] = "12";

	printf("ft_strlen\n");
	printf("ft_fun = %lu\t lib_fun = %lu\n", ft_strlen(a1), strlen(a1));
	printf("ft_fun = %lu\t lib_fun = %lu\n", ft_strlen(a2), strlen(a2));
	printf("ft_fun = %lu\t lib_fun = %lu\n", ft_strlen(a3), strlen(a3));
	printf("\n*************************************************************\n");
}

void	test_isalpha(void)
{
	int i;

	printf("ft_isalpha\n");
	for (i = - 5; i <= 255; i++)
	{
		if (ft_isalpha(i) != isalpha(i))
		{
			printf("error on the %d-th step\n", i);
			break ;
		}
	}
	if (i == 256)
		printf("OK\n");
	printf("\n*************************************************************\n");
}

void	test_isdigit(void)
{
	int i;
		
	printf("ft_isdigit\n");
	for (i = - 5; i <= 255; i++)
	{
		if (ft_isdigit(i) != isdigit(i))
		{
			printf("error on the %d-th step\n", i);
			break ;
		}
	}
	if (i == 256)
		printf("OK\n");
	printf("\n*************************************************************\n");
}

void	test_isalnum(void)
{
	int i;
		
	printf("ft_isalnum\n");
	for (i = - 5; i <= 255; i++)
	{
		if (ft_isalnum(i) != isalnum(i))
		{
			printf("error on the %d-th step\n", i);
			break ;
		}
	}
	if (i == 256)
		printf("OK\n");
	printf("\n*************************************************************\n");
}

void	test_isascii(void)
{
    int i;
    
    printf("ft_isascii\n");
    for (i = - 5; i <= 255; i++)
    {
        if (ft_isascii(i) != isascii(i))
        {
            printf("error on the %d-th step\n", i);
            break ;
        }
    }
    if (i == 256)
        printf("OK\n");
    printf("\n*************************************************************\n");
}

void    test_isprint(void)
{
    int i;
    
    printf("ft_isprint\n");
    for (i = - 5; i <= 255; i++)
    {
        if (ft_isprint(i) != isprint(i))
        {
            printf("error on the %d-th step\n", i);
            break ;
        }
    }
    if (i == 256)
        printf("OK\n");
    printf("\n*************************************************************\n");
}

void    test_tolower(void)
{
    int i;
    
    printf("ft_tolower\n");
    for (i = - 5; i <= 255; i++)
    {
        if (ft_tolower(i) != tolower(i))
        {
            printf("error on the %d-th step\n", i);
            break ;
        }
    }
    if (i == 256)
        printf("OK\n");
    printf("\n*************************************************************\n");
}

void    test_toupper(void)
{
    int i;
    
    printf("ft_toupper\n");
    for (i = - 5; i <= 255; i++)
    {
        if (ft_toupper(i) != toupper(i))
        {
            printf("error on the %d-th step\n", i);
            break ;
        }
    }
    if (i == 256)
        printf("OK\n");
    printf("\n*************************************************************\n");
}

void    test_atoi(void)
{
    printf("ft_atoi\n");
    if (ft_atoi("123456") == atoi("123456")) printf("OK\n"); else printf("error\n");
    if (ft_atoi("   58965  ") == atoi("   58965  ")) printf("OK\n"); else printf("error\n");
    if (ft_atoi("   -258  lglg +") == atoi("   -258  lglg +")) printf("OK\n"); else printf("error\n");
    if (ft_atoi("  +- 25") == atoi("  +- 25")) printf("OK\n"); else printf("error\n");
    if (ft_atoi("00968") == atoi("00968")) printf("OK\n"); else printf("error\n");
    if (ft_atoi("  --898uu") == atoi("  --898uu")) printf("OK\n"); else printf("error\n");
    if (ft_atoi(" +987 poi 25") == atoi(" +987 poi 25")) printf("OK\n"); else printf("error\n");
    printf("%d\n", ft_atoi("99999999999999999999999")); 
	printf("%d\n", atoi("99999999999999999999999"));// printf("OK\n"); else printf("error\n");
    
	printf("\n*************************************************************\n");
}

void    test_strdup(void)
{
    char *dest = NULL;
    char *arr = "11";
    
    printf("ft_strdup\n");
    dest = ft_strdup("Hello");
    printf("%s\n", dest);
    free(dest);
    dest = strdup("Hello");
    printf("%s\n", dest);
    free(dest);dest = ft_strdup("");
    printf("%s\n", dest);
    free(dest);
    dest = strdup("");
    printf("%s\n", dest);
    free(dest);
    arr = ft_strdup("thrtkh;rtk;lrtkh");
    printf("%s\n", arr);
    free(arr);
    arr = strdup("thrtkh;rtk;lrtkh");
    printf("%s\n", arr);
    free(arr);
    printf("\n*************************************************************\n");
}

void    test_strcpy(void)
{
    char test1[50] = "asdf";
    char test2[50] = "asdf";

    printf("ft_strcpy\n");
    printf("%s\n", ft_strcpy(test1, "qwerty\n"));
    printf("%s\n", strcpy(test2, "qwerty\n"));
    
    printf("%s\n", ft_strcpy(test1, ""));
    printf("%s\n", strcpy(test2, ""));
    
    printf("%s\n", ft_strcpy(test1, "hell0\n"));
    printf("%s\n", strcpy(test2, "hell0\n"));

    printf("%s\n", ft_strcpy(test1, "11111111111111111111118"));
    printf("%s\n", strcpy(test2, "11111111111111111111118"));
    printf("\n*************************************************************\n");

}

void    test_strncpy(void)
{
    char test1[] = "asd55";
    char test2[] = "asd55";
    
    printf("ft_strNcpy\n");
    printf("%s\n", ft_strncpy(test1, "uiop", 5));
    printf("%s\n", strncpy(test2, "uiop", 5));
    printf("%s\n", ft_strncpy(test1, "qwerty", 4));
    printf("%s\n", strncpy(test2, "qwerty", 4));
    printf("%s\n", ft_strncpy(test1, "z", 1));
    printf("%s\n", strncpy(test2, "z", 1));
    printf("\n*************************************************************\n");

}
void    test_strstr(void)
{
    printf("ft_strstr\n");
    printf("%s\n", ft_strstr("asdf qwerty", "wer"));
    printf("%s\n", strstr("asdf qwerty", "wer"));

    printf("%s\n", ft_strstr("asdf qwerty qwerty", "wer"));
    printf("%s\n", strstr("asdf qwerty qwerty", "wer"));

    printf("%s\n", ft_strstr("asdf qwerty", "qwerty1"));
    printf("%s\n", strstr("asdf qwerty", "qwerty1"));

    printf("%s\n", ft_strstr("", "wer"));
    printf("%s\n", strstr("", "wer"));

    printf("%s\n", ft_strstr("asdf qwerty", "zxcv"));
    printf("%s\n", strstr("asdf qwerty", "zxcv"));

    printf("%s\n", ft_strstr("asdf qwerty", ""));
    printf("%s\n", strstr("asdf qwerty", ""));
    printf("\n*************************************************************\n");

}

void    test_strnstr(void)
{
    printf("ft_strNstr\n");
    printf("%s\n", ft_strnstr("asdf qwerty", "wer", 9));
    printf("%s\n", strnstr("asdf qwerty", "wer", 9));

    printf("%s\n", ft_strnstr("asdf qwerty qwerty", "wer", 8));
    printf("%s\n", strnstr("asdf qwerty qwerty", "wer", 8));

    printf("%s\n", ft_strnstr("asdf qwerty", "qwerty1", 15));
    printf("%s\n", strnstr("asdf qwerty", "qwerty1", 15));

    printf("%s\n", ft_strnstr("", "wer", 2));
    printf("%s\n", strnstr("", "wer", 2));

    printf("%s\n", ft_strnstr("asdf qwerty", "zxcv", 6));
    printf("%s\n", strnstr("asdf qwerty", "zxcv", 6));

    printf("%s\n", ft_strnstr("asdf qwerty", "", 1));
    printf("%s\n", strnstr("asdf qwerty", "", 1));
    printf("\n*************************************************************\n");

}

void    test_memset(void)
{
    char    str[] = "Bla bla bla bla bla";

    printf("ft_memset\n");
    printf("%s\n", str);
    ft_memset(str + 3, 80, 0);
    printf("%s\n", str);
    ft_memset(str + 3, 80, 4);
    printf("%s\n", str);
    printf("\n*************************************************************\n");

}

void    test_memcpy(void)
{
    char    str[] = "Bla bla bla bla bla";

    printf("ft_memcpy\n");
    printf("%s\n", str);
    printf("%s\n", ft_memcpy(str, "123456", 5));
    printf("\n*************************************************************\n");
}

void    test_bzero(void)
{
    char    str[] = "Bla bla bla bla bla";

    printf("ft_bzero\n");
    printf("%s\n", str);
    ft_bzero(str + 4, 5);
    printf("%s\n", str);
    printf("\n*************************************************************\n");

}

void    test_strcmp(void)
{
    printf("ft_strcmp\n");
    if (ft_strcmp("123456", "123456") == strcmp("123456","123456")) printf("OK\n"); else printf("error\n");
    if (ft_strcmp("123H56", "123456") == strcmp("123H56", "123456")) printf("OK\n"); else printf("error\n");
    if (ft_strcmp("123456", "123456333") == strcmp("123456", "123456333")) printf("OK\n"); else printf("error\n");
    if (ft_strcmp("Hello", "HelLo") == strcmp("Hello", "HelLo")) printf("OK\n"); else printf("error\n");
    if (ft_strcmp("123456", "") == strcmp("123456", "")) printf("OK\n"); else printf("error\n");
    if (ft_strcmp("", "123456") == strcmp("", "123456")) printf("OK\n"); else printf("error\n");
    if (ft_strcmp("123456888", "123456") == strcmp("123456888", "123456")) printf("OK\n"); else printf("error\n");
    printf("\n*************************************************************\n");
}

void    test_strncmp(void)
{
    printf("ft_strNcmp\n");
    if (ft_strncmp("123456", "123456", 8) == strncmp("123456","123456", 8)) printf("OK\n"); else printf("error\n");
    if (ft_strncmp("123H56", "123456", 5) == strncmp("123H56", "123456", 5)) printf("OK\n"); else printf("error\n");
    if (ft_strncmp("123456", "123456333", 7) == strncmp("123456", "123456333", 7)) printf("OK\n"); else printf("error\n");
    if (ft_strncmp("Hello", "HelLo", 3) == strncmp("Hello", "HelLo", 3)) printf("OK\n"); else printf("error\n");
    if (ft_strncmp("123456", "", 1) == strncmp("123456", "", 1)) printf("OK\n"); else printf("error\n");
    if (ft_strncmp("", "123456", 2) == strncmp("", "123456", 2)) printf("OK\n"); else printf("error\n");
    if (ft_strncmp("123456888", "123456", 0) == strncmp("123456888", "123456", 0)) printf("OK\n"); else printf("error\n");
    printf("\n*************************************************************\n");
}

void    test_memcmp(void)
{
    int a, b;

    printf("ft_memcmp\n");
    if ((a = ft_memcmp("123456", "123456", 5)) == (b = memcmp("123456","123456", 5))) printf("OK\n"); else printf("error\n");
    printf("%d\t%d\n", a, b);
    if ((a = ft_memcmp("123H56", "123456", 5)) == (b = memcmp("123H56", "123456", 5))) printf("OK\n"); else printf("error\n");
    printf("%d\t%d\n", a, b);
    if ((a = ft_memcmp("123456", "123456333", 8)) == (b =memcmp("123456", "123456333", 8))) printf("OK\n"); else printf("error\n");
    printf("%d\t%d\n", a, b);
    if ((a = ft_memcmp("Hello", "HelLo", 3)) == (b = memcmp("Hello", "HelLo", 3))) printf("OK\n"); else printf("error\n");
    printf("%d\t%d\n", a, b);
    if ((a = ft_memcmp("123456", "", 1)) == (b = memcmp("123456", "", 1))) printf("OK\n"); else printf("error\n");
    printf("%d\t%d\n", a, b);
    if ((a = ft_memcmp("", "123456", 2)) == (b = memcmp("", "123456", 2))) printf("OK\n"); else printf("error\n");
    printf("%d\t%d\n", a, b);
    if ((a = ft_memcmp("123456888", "123456", 7)) == (b = memcmp("123456888", "123456", 7))) printf("OK\n"); else printf("error\n");
    printf("%d\t%d\n", a, b);
    printf("\n*************************************************************\n");
}

void    test_memmove(void)
{
    char    str1[] = "abcdefghijklmnopqrstuvwxyz";
    char    str2[] = "123456789abcdefghijklmnopqrstuvwxyz";
    char    *ptr;

    ptr = &str2[9];
    printf("ft_memove\n");
    printf("%s\n", str1);
    printf("%s\n", ft_memmove(str1, "123456", 5));
    printf("%s\n", str2);
    printf("%s\n", ft_memmove(str2, ptr, 5));
    printf("\n*************************************************************\n");

}

void    test_memchr(void)
{
    char    str[] = "abcdefghijklmnopqrstuvwxyz";

    printf("ft_memchr\n");
    printf("%s\n", str);
    printf("%s\n", (char*)ft_memchr(str, 'd', 5));
    printf("%s\n", str);
    printf("%s\n", (char*)ft_memchr(str, 'z', 5));
    printf("\n*************************************************************\n");

}

void    test_strchr(void)
{
    char    str[] = "abcdefghijklmnopqrstuvwxyz";

    printf("ft_strchr\n");
    //printf("%s\n", str);
    printf("%s\n", ft_strchr(str, 'd'));
    printf("%s\n", strchr(str, 'd'));
    //printf("%s\n", str);
    printf("%s\n", ft_strchr(str, 'z'));
    printf("%s\n", strchr(str, 'z'));
    //printf("%s\n", str);
    printf("%s\n", ft_strchr(str, '\0'));
    printf("%s\n", strchr(str, '\0'));
    printf("\n*************************************************************\n");

}

void    test_strrchr(void)
{
    char    str[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

    printf("ft_strRchr\n");
    //printf("%s\n", str);
    printf("%s\n", ft_strrchr(str, 'd'));
    printf("%s\n", strrchr(str, 'd'));
    //printf("%s\n", str);
    printf("%s\n", ft_strrchr(str, 'z'));
    printf("%s\n", strrchr(str, 'z'));
   // printf("%s\n", str);
    printf("%s\n", ft_strrchr(str, '\0'));
    printf("%s\n", strrchr(str, '\0'));
    printf("\n*************************************************************\n");

}
void    test_strcat(void)
{
    char test[50] = "123456";
    char test1[50] = "123456";
    printf("ft_strcat\n");
    printf("%s\n", ft_strcat(test, "asdf"));
    printf("%s\n", strcat(test1, "asdf"));
    printf("%s\n", ft_strcat(test, ""));
    printf("%s\n", strcat(test1, ""));
    printf("%s\n", ft_strcat(test, "zxcv"));
    printf("%s\n", strcat(test1, "zxcv"));
    printf("\n*************************************************************\n");
}

void    test_strncat(void)
{
    printf("ft_strNcat\n");
    char test1[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
    char test2[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
    printf("%s\n", ft_strncat(test1, "asdf", 16));
    printf("%s\n", strncat(test2, "asdf", 16));
    printf("%s\n", ft_strncat(test1, "", 16));
    printf("%s\n", strncat(test2, "", 16));
    printf("%s\n", ft_strncat(test1, "qwerty", 0));
    printf("%s\n", strncat(test2, "qwerty", 0));
    printf("%s\n", ft_strncat(test1, "asdf", 3));
    printf("%s\n", strncat(test2, "asdf", 3));
    printf("\n*************************************************************\n");
}
void    test_strlcat(void)
{
    char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
    printf("ft_strLcat\n");
    printf("%ld-", ft_strlcat(test, "asdf", 16));
    printf("%s\n", test);
    printf("%ld-", ft_strlcat(test, "asdf", 6));
    printf("%s\n", test);
    printf("%ld-", ft_strlcat(test, "asdf", 4));
    printf("%s\n", test);
    printf("%ld-", ft_strlcat(test, "", 16));
    printf("%s\n", test);
    printf("%ld-", ft_strlcat(test, "asdf", 0));
    printf("%s\n", test);
    printf("\n*************************************************************\n");
}

void	test_strsplit(void)
{
	char	*test = "*Hello***my**dear****friend!*";
	char	**arr = NULL;
	
	printf("ft_strsplit\n");
	arr = ft_strsplit(test, '*');
	printf("1111ft_strsplit\n");

	printf("%s\n", arr[0]);
	printf("%s\n", arr[1]);
	printf("%s\n", arr[2]);
	printf("%s\n", arr[3]);
	printf("%s\n", arr[4]);
    printf("\n*************************************************************\n");

}
	int	main()
{
	test_strlen();
	test_isalpha();
	test_isdigit();
	test_isalnum();
    test_isascii();
    test_isprint();
    test_tolower();
    test_toupper();
    test_atoi();
    test_strdup();
    test_strcpy();
    test_strncpy();
    test_strstr();
    test_memset();
    test_bzero();
    test_strcmp();
    test_strncmp();
    test_memcpy();
    test_memcmp();
    test_memmove();
    test_memchr();
    test_strchr();
    test_strcat();
    test_strncat();
    test_strnstr();
    test_strrchr();
    test_strlcat();
	test_strsplit();
	return (0);
}
