#include <stdio.h>
#include "printf.h"

int main() {
//	printf("%*.*d\n", 5, 10, 2);
//	printf("%*.*d\n", 5, 3, 30);

	printf("%d\n", printf("%-70p\n", 1234));
	printf("\n%d\n", ft_printf("%5.0x", 0));
	return 0;
}
