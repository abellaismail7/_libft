#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"


int main()
{
	//int dres;
	//int odres;
	char *icp;
	char ocp[200];
	puts("========= memset ========");
 	icp = strdup("jkdkjs");

	memset(icp, 'b', 1);
	printf("%s\n", icp);
	ft_memset(icp, 'a', 11);
	printf("%s", icp);

	puts("");
	puts("========= bzero ========");
	icp = strdup("abcdef");
	bzero(icp+2, 3);
	printf("%s\n", icp);
	icp = strdup("abcdef");
	ft_bzero(icp + 2, 3);
	printf("%s", icp);

	puts("");
	puts("========= memcpy ========");
	icp = strdup("abcdef");
	memcpy(ocp, icp, 4);
	printf("%s\n", ocp);
	icp = strdup("abcdef");
	ft_memcpy(ocp , 	icp, 4);
	printf("%s", ocp);

	puts("");
	puts("========= memmove ========");
	icp = strdup("abcdef");
	memmove(icp, icp + 2, 4);
	printf("%s\n", icp);
	icp = strdup("abcdef");
	ft_memmove(icp , icp + 2, 4);
	printf("%s", icp);

	puts("");
	puts("========= memchr ========");
	icp = strdup("abcdef");
	char *res = memchr(icp, 'c', 4);
	printf("%s\n", res);
	icp = strdup("abcdef");
	res = ft_memchr(icp , 'c', 4);
	printf("%s", res);

	puts("");
	puts("========= memcmp ========");
	icp = strdup("abcdef");
	int dres = memcmp(icp, "abcdeg", 6);
	printf("%d\n", dres);
	dres = ft_memcmp(icp, "abcdeg", 6);
	printf("%d", dres);

}
