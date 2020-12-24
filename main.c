#include <stdio.h>
#include "printf.h"

int main() {
//	printf("%*.*d\n", 5, 10, 2);
	printf("%*.*d\n", 5, 3, 30);

	ft_printf("%*.*d", 5, 3, 20);
	return 0;
}
