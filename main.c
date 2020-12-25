#include <stdio.h>
#include "printf.h"

int main() {
//	printf("%*.*d\n", 5, 10, 2);
//	printf("%*.*d\n", 5, 3, 30);

	printf("%d\n", printf("%0-7i", -54));
	printf("\n%d\n", ft_printf("%0*i", -7, -54));
	printf("\n%d\n", ft_printf("%0-*i", 7, -54));
	return 0;
}
