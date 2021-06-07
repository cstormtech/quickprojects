#include <stdio.h>
#include <math.h>

main()
{
	int a, i, notprime, primecount;

	a = 2;
	notprime = 0;
	primecount = 0;

	while (a <= 10) {
		printf("Now testing %d for primality!\n", a);
		for (i = 2; i <= sqrt(a); ++i) {
			printf("\ttrying %d %% %d...\n", a, i);
			if (!(a % i)) {
				printf("\tnot prime\n");
				notprime++;
				break;
			}
		}

		if (notprime) {
			printf("Not prime, continuing...\n");
			notprime = 0;
		}
		else {
			printf("%d is prime, continuing...\n", a);
			++primecount;
		}
		++a;
	}
	printf("Primes counted: %d\n", primecount);
}
