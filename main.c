#include <stdio.h>
#include "printf.h"

int main() {
	printf("%*.*d\n", 5, 10, 2);
	printf("%-*.*d", 5, 1, 3);
	ft_printf("%*.*d", 5, 10, 2);
	return 0;
}
