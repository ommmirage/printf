#include <stdio.h>
#include "printf.h"

int main() {
	printf("%0*.*d", 5, 2, 2);
//	ft_printf("%*.*d", 5, 10, 2);
	return 0;
}
