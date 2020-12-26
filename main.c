#include <stdio.h>
#include "printf.h"

int main() {
//	printf("%*.*d\n", 5, 10, 2);
//	printf("%*.*d\n", 5, 3, 30);

	printf("\n%d\n", ft_printf("%-00000-----*i", 12, 8));
	printf("%d\n", printf("%00000-----*i", 12, 8));
	return 0;
}
