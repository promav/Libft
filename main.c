#include "libft.h"
#include "stdio.h"

int main()
{
    char *a = "olaComo estan los maquinasloa";
	char *b = "alo";

	printf("%s", ft_strtrim(a, b));
    return 0;
}