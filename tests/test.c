#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"


int main()
{
	int dres;
	int odres;
	char *icp;

	puts("========= isalpha ========");
	dres = ft_isalpha(',');
	odres = isalpha(',');
	printf("%d %d", dres, odres);

	puts("");
	puts("========= isdigit ========");
	dres = ft_isdigit('r');
	odres = isdigit('r');
	printf("%d %d", dres, odres);

	puts("");
	puts("========= isalnum ========");
	dres = ft_isalnum(200);
	odres = isalnum('.');
	printf("%d %d", dres, odres);

	puts("");
	puts("========= is_ascii ========");
	dres = ft_isascii(20);
	odres = isascii('.');
	printf("%d %d", dres, odres);

	puts("");
	puts("========= is_print ========");
	dres = ft_isprint(50);
	odres = isprint(50);
	printf("%d %d", dres, odres);

	puts("");
	puts("========= strlen ========");
	icp = "sddsf";
	dres = ft_strlen(icp);
	odres = strlen(icp);
	printf("%d %d", dres, odres);

	puts("");
	puts("========= memset ========");
	icp = "sddsf";
	dres = ft_strlen(icp);
	odres = strlen(icp);
	printf("%d %d", dres, odres);
}
