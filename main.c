#include <stdio.h>
#include "printf.h"

int main() {
//	printf("%*.*d\n", 5, 10, 2);
//	printf("%*.*d\n", 5, 3, 30);

//	printf("%d\n", printf("this %d number\n", 17));
	printf("\n%d\n", ft_printf("%5.0d", 0));
	return 0;
}
