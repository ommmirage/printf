#include <stdio.h>
#include "printf.h"

int main() {
//	printf("%*.*d\n", 5, 10, 2);
//	printf("%*.*d\n", 5, 3, 30);

	printf("%d\n", printf("%09s", "yolo"));
	printf("\n%d\n", ft_printf("%09s", "yolo"));
	return 0;
}
