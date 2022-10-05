#include <stdio.h>

int isprime(int n)
{
	int i = 2;

	if (n == 1)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return(1);
}

int main()
{
    int m, n;

	scanf("%d %d", &m, &n);
	if (m > n)
		return (0);
	if (m < 1)
		return (0);
	if (n > 1000000)
		return 0;
    while (m <= n)
	{
		if (isprime(m) == 1)
			printf("%d\n", m);
		m++;
	}
}