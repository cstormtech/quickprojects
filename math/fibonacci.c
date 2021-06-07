#include <stdio.h>

main()
{
	int a, b, c;

	/* formal definition of Fibonacci sequence */
	a = 0;
	b = 1;
	printf("%d\n%d\n", a, b);

	do {
		c = a + b;
		printf("%d\n", c);
		a = b;
		b = c;
	} while (c < 20000);
}
